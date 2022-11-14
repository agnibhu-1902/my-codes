import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

hist = np.zeros(256, dtype=np.uint8)
im = cv.imread('Photos/yellow.jpg', 0)
h,w = im.shape
for i in range(h):
    for j in range(w):
        hist[im[i,j]] += 1
cv.imshow('Grayscale Image', im)
plt.hist(hist)
plt.show()
print(hist)
cv.waitKey(0)
cv.destroyAllWindows()