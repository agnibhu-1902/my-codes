import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

def img_subtraction(img1, img2):
    h, w = img1.shape
    newimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(h):
        for j in range(w):
            newimg[i, j] = int(img1[i, j]) - int(img2[i, j])
    if np.sum(newimg) == 0:
        return "The images are equal"
    else:
        return "The images are not equal"

img1 = cv.imread('Photos/cycle.jpeg', 0)
img2 = cv.imread('Photos/rabbit.jpeg', 0)
img3 = cv.imread('Photos/city.jpeg', 0)
img4 = img3

print(img_subtraction(img1, img2))
print(img_subtraction(img3, img4))

