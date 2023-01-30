import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

img = cv.imread('Photos/landscape.jpg', 0)
hist = np.zeros(256, dtype = 'uint32')
h, w = img.shape

for i in range(h):
    for j in range(w):
        hist[img[i, j]] += 1

fig = plt.figure(figsize = (18, 18))
pltX, pltY = 1, 3
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.plot(np.arange(len(hist)), hist)
plt.title('Image Plot')
fig.add_subplot(pltX, pltY, 3)
plt.bar(np.arange(len(hist)), hist)
plt.title('Image Histogram')
fig.show()
plt.waitforbuttonpress()