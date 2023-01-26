import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

def normalizehist(hist):
    normhist = np.zeros(256, dtype = 'float')
    for i in range(256):
        normhist[i] = hist[i] / np.sum(hist)
    return normhist

def performequalization(nhist):
    cumfreq = np.zeros(256, dtype = 'float')
    lookuptable = np.zeros(256, dtype = 'float')
    cumfreq[0] = nhist[0]
    for i in range(1, 256):
        cumfreq[i] = cumfreq[i - 1] + nhist[i]
    for i in range(256):
        lookuptable[i] = np.round(cumfreq[i] * i)
    return lookuptable

def findhistogram(img):
    h, w = img.shape
    hist = np.zeros(256, dtype = 'uint32')
    for i in range(h):
        for j in range(w):
            hist[img[i, j]] += 1
    return hist

img = cv.imread('Photos/landscape.jpg', 0)
h, w = img.shape
hist = findhistogram(img)
nhist = normalizehist(hist)
lookuptable = performequalization(nhist)
eqim = np.zeros((h, w), dtype = np.uint8)
for i in range(h):
    for j in range(w):
        eqim[i, j] = lookuptable[img[i, j]]
newhist = findhistogram(eqim)
fig = plt.figure(figsize = (18, 18))
pltX, pltY = 2, 2
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.bar(np.arange(len(hist)), hist)
plt.title('Histogram for Original Image')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(eqim, cmap = 'gray')
plt.axis('off')
plt.title('Equalized Image')
fig.add_subplot(pltX, pltY, 4)
plt.bar(np.arange(len(newhist)), newhist)
plt.title('Histogram for Equalized Image')
plt.show()
plt.waitforbuttonpress()