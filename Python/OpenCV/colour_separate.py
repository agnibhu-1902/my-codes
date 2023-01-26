import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

img = cv.imread('Photos/flower.jpg')
h, w, c = img.shape
rim = np.zeros([h, w, 3], dtype = np.uint8)
gim = np.zeros([h, w, 3], dtype = np.uint8)
bim = np.zeros([h, w, 3], dtype = np.uint8)
for i in range(h):
    for j in range(w):
        for k in range(3):
            rim[i, j, k] = img[i, j, 2]
            gim[i, j, k] = img[i, j, 1]
            bim[i, j, k] = img[i, j, 0]

fig = plt.figure(figsize = (18, 18))
pltX, pltY = 2, 2
fig.add_subplot(pltX, pltY, 1)
plt.imshow(cv.cvtColor(img, cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(cv.cvtColor(rim, cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Red Image')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(cv.cvtColor(gim, cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Green Image')
fig.add_subplot(pltX, pltY, 4)
plt.imshow(cv.cvtColor(bim, cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Blue Image')
fig.show()
fig.waitforbuttonpress()