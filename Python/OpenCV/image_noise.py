# gaussian noise usage
import numpy as np
import random
import cv2
img = cv2.imread('Photos/lena.png', 0)
# Generate Gaussian noise
gauss = np.random.normal(0, 1, img.size)
gauss = gauss.reshape(img.shape[0], img.shape[1], img.shape[2]).astype('uint8')
# Add the Gaussian noise to the image
img_gauss = cv2.add(img, gauss)
# Display the image
cv2.imshow('noisy- image', img_gauss)
cv2.waitKey(0)
# add salt and pepper noise
def add_noise(img):
    # Getting the dimensions of the image
    row, col = img.shape
    # Randomly pick some pixels in the
    # image for coloring them white
    # Pick a random number between 300 and 10000
    number_of_pixels = random.randint(300, 10000)
    for i in range(number_of_pixels):
        # Pick a random y coordinate
        y_coord = random.randint(0, row - 1)
        # Pick a random x coordinate
        x_coord = random.randint(0, col - 1)
        # Color that pixel to white
        img[y_coord][x_coord] = 255
    # Randomly pick some pixels in
    # the image for coloring them black
    # Pick a random number between 300 and 10000
    number_of_pixels = random.randint(300, 10000)
    for i in range(number_of_pixels):
        # Pick a random y coordinate
        y_coord = random.randint(0, row - 1)
        # Pick a random x coordinate
        x_coord = random.randint(0, col - 1)
        # Color that pixel to black
        img[y_coord][x_coord] = 0
        return img
    # salt-and-pepper noise can
    # be applied only to grayscale images
    # Reading the color image in grayscale image
    img = cv2.imread('lena small.png',cv2.IMREAD_GRAYSCALE)
    cv2.imshow('original', img)
    # Storing the image
    cv2.imshow('salt-and-pepper-lena',add_noise(img))
    cv2.waitKey(0)