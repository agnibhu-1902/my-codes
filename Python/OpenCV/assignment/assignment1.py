import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt


def extract_channels(im):
    # Extract height, width and channel size
    h, w, c = im.shape
    # Initialize numpy arrays for each channel
    rchan = np.zeros([h, w]).astype(np.uint8)
    gchan = np.zeros([h, w]).astype(np.uint8)
    bchan = np.zeros([h, w]).astype(np.uint8)
    for i in range(h):
        for j in range(w):
            rchan[i][j] = im[i][j][2] # Red channel
            gchan[i][j] = im[i][j][1] # Green channel
            bchan[i][j] = im[i][j][0] # Blue channel
    return rchan, gchan, bchan


im = cv.imread('Photos/flower.png') # Import image
rchan, gchan, bchan = extract_channels(im)
im = cv.cvtColor(im, cv.COLOR_BGR2RGB) # Convert BGR image to RGB image
fig, axs = plt.subplots(1, 4)
# Remove x and y labels
for ax in axs:
    ax.set_xticks([])
    ax.set_yticks([])
# Display images in each subplot
axs[0].imshow(im)
axs[0].set_title('Original Image')
axs[1].imshow(rchan, cmap='gray')
axs[1].set_title('Red Channel')
axs[2].imshow(gchan, cmap='gray')
axs[2].set_title('Green Channel')
axs[3].imshow(bchan, cmap='gray')
axs[3].set_title('Blue Channel')
plt.waitforbuttonpress()