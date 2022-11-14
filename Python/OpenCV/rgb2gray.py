import cv2 as cv
import numpy as np

def RGB2Gray1(im):
    h,w,c = im.shape
    gim = np.zeros((h, w), dtype=np.uint8)
    for i in range(h):
        for j in range(w):
            gim[i][j] = (int(im[i][j][0]) + int(im[i][j][1]) + int(im[i][j][2])) // 3
    return gim


def RGB2Gray2(im):
    h,w,c = im.shape
    gim = np.zeros((h, w), dtype=np.uint8)
    for i in range(h):
        for j in range(w):
            gim[i][j] = 0.3 * im[i][j][2] + 0.59 * im[i][j][1] + 0.11 * im[i][j][0]
    return gim


img = cv.imread('/Users/agnibhu.mandal/Documents/Code/Python/OpenCV/Photos/flower.png')
gim = RGB2Gray1(img)
cv.imshow('RGB2Gray1', gim)
gim = RGB2Gray2(img)
cv.imshow('RGB2Gray2', gim)
gim = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('RGB2Gray3', gim)
cv.waitKey(0)
cv.destroyAllWindows()