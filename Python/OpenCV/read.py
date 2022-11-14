import cv2 as cv
img = cv.imread('/Users/agnibhu.mandal/Documents/Code/Python/OpenCV/Photos/nature.jpg')
cv.imshow('Nature',img)
print(img.shape)
cv.waitKey(0)