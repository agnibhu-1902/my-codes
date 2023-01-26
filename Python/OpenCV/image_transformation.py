import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

def neg(img):
    return 255 - img

def logimg(img):
    h, w = img.shape
    logimg = np.zeros([h, w], dtype = np.uint8)
    maxval = np.max(img)
    c = 255 / np.log(1 + maxval)
    for i in range(h):
        for j in range(w):
            logimg[i, j] = np.round(c * np.log(1 + img[i, j]))
    return logimg

def powerlaw(img):
    h, w = img.shape
    gammaimg = np.zeros([h, w], dtype = np.uint8)
    maxval = np.max(img)
    y = 2.1
    c = 0.005
    for i in range(h):
        for j in range(w):
            gammaimg[i, j] = np.round(c * (img[i, j] ** y))
    return gammaimg

def piecewise_linear_transformation(img):
    a, b = 50, 127
    m = np.max(img)
    n = np.min(img)
    h, w = img.shape
    newimg = np.zeros([h, w], dtype = np.uint8)
    r = (b - a) / (int(n) - int(m))
    for i in range(h):
        for j in range(w):
            newimg[i, j] = a + r * int(img[i, j])
    return newimg

if __name__ == "__main__":
    img = cv.imread('Photos/landscape.jpg', 0)
    negimg = neg(img)
    logimg = logimg(img)
    gammaimg = powerlaw(img)
    newimg = piecewise_linear_transformation(img)
    fig = plt.figure(figsize = (18, 18))
    pltX, pltY = 2, 3
    fig.add_subplot(pltX, pltY, 1)
    plt.imshow(cv.cvtColor(img, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Original Image')
    fig.add_subplot(pltX, pltY, 2)
    plt.imshow(cv.cvtColor(negimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Negative Image')
    fig.add_subplot(pltX, pltY, 3)
    plt.imshow(cv.cvtColor(logimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Log Image')
    fig.add_subplot(pltX, pltY, 4)
    plt.imshow(cv.cvtColor(gammaimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Gamma Image')
    fig.add_subplot(pltX, pltY, 5)
    plt.imshow(cv.cvtColor(newimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Linear Transformed Image')
    fig.show()
    fig.waitforbuttonpress()