import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt


def gray_convert_average(im):
    # Extract height, width and channel size
    h,w,c = im.shape
    # Initialize numpy array for gray image
    gim = np.zeros((h, w), dtype=np.uint8)
    for i in range(h):
        for j in range(w):
            # Convert to grayscale using the average of R, G and B components
            gim[i][j] = (int(im[i][j][0]) + int(im[i][j][1]) + int(im[i][j][2])) // 3
    return gim


def gray_convert_luminosity(im):
    # Extract height, width and channel size
    h,w,c = im.shape
    # Initialize numpy array for gray image
    gim = np.zeros((h, w), dtype=np.uint8)
    for i in range(h):
        for j in range(w):
            # Convert to grayscale using luminosity form
            gim[i][j] = 0.3 * im[i][j][2] + 0.59 * im[i][j][1] + 0.11 * im[i][j][0]
    return gim


im = cv.imread('Photos/landscape.jpg') # Read image
gim1 = gray_convert_average(im)
gim2 = gray_convert_luminosity(im)
im = cv.cvtColor(im, cv.COLOR_BGR2RGB) # Convert BGR image to RGB image
fig, axs = plt.subplots(1, 3)
# Remove x and y labels
for ax in axs:
    ax.set_xticks([])
    ax.set_yticks([])
# Display images in each subplot
axs[0].imshow(im)
axs[0].set_title('Original Image')
axs[1].imshow(gim1, cmap='gray')
axs[1].set_title('Grayscale Image\nUsing Channel Average')
axs[2].imshow(gim2, cmap='gray')
axs[2].set_title('Grayscale Image\nUsing Luminosity Form')
plt.waitforbuttonpress()