import matplotlib.pyplot as plt
import cv2 as cv
import numpy as np

def neg_img(im):
    h, w = im.shape
    newImg = np.zeros([h, w]).astype(np.uint8)
    for i in range(h):
        for j in range(w):
            newImg[i][j] = 255 - im[i][j]
    return newImg


im = cv.imread('Photos/flower.jpg', 0)
negIm = neg_img(im)
fig, axs = plt.subplots(1, 2)
axs[0].imshow(im)
axs[0].set_title('Original Image')
axs[1].imshow(negIm)
axs[1].set_title('Negative Image')
plt.waitforbuttonpress()