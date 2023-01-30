import cv2 as cv
import matplotlib.pyplot as plt
import numpy as np

def zeropadding(img):
    h, w = img.shape
    newimg = np.zeros((h + 2, w + 2), dtype = np.uint8)
    for i in range(h):
        for j in range(w):
            newimg[i + 1, j + 1] = img[i, j]
    return newimg

def sobel(pimg):
    h, w = pimg.shape
    kernel = np.array([[-1, -2, -1], [0, 0, 0], [1, 2, 1]]) # Detects horizontal edges
    newimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            sum, x, y = 0, 0, 0
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    sum += pimg[k, l] * kernel[x, y]
                    y += 1
                y = 0
                x += 1
            newimg[i - 1, j - 1] = sum
    return newimg

def prewitt(pimg):
    h, w = pimg.shape
    kernel = np.array([[-1, -1, -1], [0, 0, 0], [1, 1, 1]]) # Detects horizontal edges
    newimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            sum, x, y = 0, 0, 0
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    sum += pimg[k, l] * kernel[x, y]
                    y += 1
                y = 0
                x += 1
            newimg[i - 1, j - 1] = sum
    return newimg

img = cv.imread('Photos/bird.jpeg', 0)
img = cv.resize(img, (256, 256))
pimg = zeropadding(img)
sobelimg = sobel(pimg)
prewittimg = prewitt(pimg)
fig = plt.figure(figsize = (18, 18))
pltX, pltY = 1, 3
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(sobelimg, cmap = 'gray')
plt.axis('off')
plt.title('Sobel Image')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(prewittimg, cmap = 'gray')
plt.axis('off')
plt.title('Prewitt Image')
fig.show()
plt.waitforbuttonpress()
