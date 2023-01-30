import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

img = cv.imread('Photos/cycle.jpeg', 0)
h, w = img.shape
newimg = np.zeros((h, w), dtype = np.uint8)
t = int(input("Enter a threshold value: "))
for i in range(h):
    for j in range(w):
        if img[i, j] > t:
            newimg[i, j] = 255
        else:
            newimg[i, j] = 0

fig = plt.figure(figsize = (18, 18))
pltX, pltY = 1, 2
fig.add_subplot(pltX, pltY, 1)
plt.imshow(img, cmap = 'gray')
plt.axis('off')
plt.title('Original Image')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(newimg, cmap = 'gray')
plt.axis('off')
plt.title('Threshold Image')
fig.show()
plt.waitforbuttonpress()
