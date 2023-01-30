import math
import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

img = cv.imread('Photos/eiffel_tower.jpeg', 0)
img = cv.resize(img, (512, 512))
h, w = img.shape
newimg = np.zeros((h, w), dtype = np.uint8)
deg = int(input("Enter the angle of rotation (90, 180, 270): "))
rad = math.radians(deg)
for i in range(h):
    for j in range(w):
        r = round(i * math.cos(rad) + j * math.sin(rad))
        s = round(- i * math.sin(rad) + j * math.cos(rad))
        newimg[r, s] = img[i, j]
fig = plt.figure(figsize = (18, 18))
pltX, pltY = 1, 2
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(newimg, cmap = 'gray')
plt.axis('off')
plt.title('Rotated Image')
fig.show()
plt.waitforbuttonpress()