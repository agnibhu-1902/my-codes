import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

img = cv.imread('Photos/landscape.jpg')
b, g, r = cv.split(img)
cv.merge([r, g, b])

y = 16 + (65.738 * r / 256) + (129.057 * g / 256) + (25.064 * b / 256)
cb = 128 - (37.945 * r / 256) - (74.494 * g / 256) + (112.439 * b / 256)
cr = 128 + (112.439 * r / 256) - (94.154 * g / 256) + (18.285 * b / 256)

fig = plt.figure(figsize = (17, 12))
pltX, pltY = 2, 2
fig.add_subplot(pltX, pltY, 1)
plt.imshow(cv.cvtColor(img, cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('RGB')
fig.add_subplot(pltX, pltY, 2)
plt.imshow(cv.cvtColor(y.astype('uint8'), cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Y')
fig.add_subplot(pltX, pltY, 3)
plt.imshow(cv.cvtColor(cb.astype('uint8'), cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Cb')
fig.add_subplot(pltX, pltY, 4)
plt.imshow(cv.cvtColor(cr.astype('uint8'), cv.COLOR_BGR2RGB))
plt.axis('off')
plt.title('Cr')
fig.show()
fig.waitforbuttonpress()