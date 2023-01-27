import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

def samepadding(img):
    h, w = img.shape
    newimg = np.zeros((h + 2, w + 2), dtype = np.uint8)
    for i in range(h):
        for j in range(w):
            newimg[i + 1, j + 1] = img[i, j]
    newimg[0, 0] = newimg[1, 1]
    newimg[h + 1, 0] = newimg[h, 1]
    newimg[0, w + 1] = newimg[1, w]
    newimg[h + 1, w + 1] = newimg[h, w]
    for i in range(1, h):
        newimg[i, 0] = newimg[i, 1]
        newimg[i, w + 1] = newimg[i, w]
    for i in range(1, w):
        newimg[0, i] = newimg[1, i]
        newimg[h + 1, i] = newimg[h, i]
    return newimg

def removepadding(img):
    h, w = img.shape
    newimg = np.zeros((h - 2, w - 2), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            newimg[i - 1, j - 1] = img[i, j]
    return newimg

def maxfiterimage(pimg):
    h, w = pimg.shape
    maxfilterimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            maximum = 0
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    if pimg[k, l] > maximum:
                        maximum = pimg[k, l]
            maxfilterimg[i - 1, j - 1] = maximum
    return maxfilterimg
def minfilterimage(pimg):
    h, w = pimg.shape
    minfilterimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            minimum = 255
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    if pimg[k, l] < minimum:
                        minimum = pimg[k, l]
            minfilterimg[i - 1, j - 1] = minimum
    return minfilterimg

def meanfilter(pimg):
    h, w = pimg.shape
    meanflterimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            mean = 0
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    mean += pimg[k, l]
            mean = np.round(mean / 9)
            meanflterimg[i - 1, j - 1] = mean
    return meanflterimg

def medianfilter(pimg):
    h, w = pimg.shape
    medianfilterimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(1, h - 1):
        for j in range(1, w - 1):
            list = []
            for k in range(i - 1, i + 2):
                for l in range(j - 1, j + 2):
                    list.append(pimg[k, l])
            list.sort()
            medianfilterimg[i - 1, j - 1] = list[5]
    return medianfilterimg

img = cv.imread('Photos/eiffel_tower.jpeg', 0)
pimg = samepadding(img)
nimg = removepadding(pimg)
maxfilterimg = maxfiterimage(pimg)
minfilterimg = minfilterimage(pimg)
meanfilterimg = meanfilter(pimg)
medianfilterimg = medianfilter(pimg)
fig = plt.figure(figsize = (18, 18))
pltX, pltY = 2, 3
fig.add_subplot(pltX, pltY, 1)
plt.imshow(nimg, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(pimg, cmap = 'gray')
plt.axis('off')
plt.title('Padded Image')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(minfilterimg, cmap = 'gray')
plt.axis('off')
plt.title('Min Filtered Image')
fig.add_subplot(pltX, pltY, 4)
plt.imshow(maxfilterimg, cmap = 'gray')
plt.axis('off')
plt.title('Max Filtered Image')
fig.add_subplot(pltX, pltY, 5)
plt.imshow(meanfilterimg, cmap = 'gray')
plt.axis('off')
plt.title('Mean Filtered Image')
fig.add_subplot(pltX, pltY, 6)
plt.imshow(medianfilterimg, cmap = 'gray')
plt.axis('off')
plt.title('Median Filtered Image')
fig.show()
plt.waitforbuttonpress()
