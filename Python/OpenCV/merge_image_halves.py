import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

img1 = cv.imread('Photos/flower.png', 0)
img2 = cv.imread('Photos/landscape.jpg', 0)

img1 = cv.resize(img1, (256, 256))
img2 = cv.resize(img2, (256, 256))

h, w = img1.shape
newimg = np.zeros((h, w), dtype = np.uint8)
for i in range(h):
    for j in range(w):
        if j <= 127:
            newimg[i, j] = img1[i, j]
        else:
            newimg[i, j] = img2[i, j]

fig = plt.figure(figsize = (18, 18))
pltX, pltY = 1, 3
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img1, cmap = 'gray')
plt.axis('off')
plt.title('Image 1')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(img2, cmap = 'gray')
plt.axis('off')
plt.title('Image 2')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(newimg, cmap = 'gray')
plt.axis('off')
plt.title('Combined Image')
fig.show()
plt.waitforbuttonpress()