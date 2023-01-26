import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

img = cv.imread('Photos/landscape.jpg', 0)
hist = np.zeros(256)
h, w = img.shape

for i in range(h):
    for j in range(w):
        hist[img[i, j]] += 1

fig, axs = plt.subplots(1, 2)
x = np.arange(0, 256)
axs[0].plot(x, hist)
axs[0].set_xlabel('X')
axs[0].set_ylabel('Y')
axs[0].set_title('Histogram')
axs[1].imshow(img, cmap = 'gray')
axs[1].axis('off')
axs[1].set_title('Image')
plt.show()