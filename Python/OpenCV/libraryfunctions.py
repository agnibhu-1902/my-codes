import cv2 as  cv

path = r'Photos/flower.png'

img = cv.imread(path)
img = cv.resize(img, (256, 256))
cv.imshow('RGB Image', img)

im_rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow('BGR Image', im_rgb)
im_ycc = cv.cvtColor(img, cv.COLOR_BGR2YCR_CB)
cv.imshow('YCrCb Image', im_ycc)
im_hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
cv.imshow('HSV Image', im_hsv)

b, g, r = cv.split(img)
img = cv.merge((r, g, b))
cv.imshow('Merged Image', img)

rot1 = cv.rotate(img, cv.ROTATE_90_CLOCKWISE)
cv.imshow('90 Degree Clockwise Image', rot1)
rot2 = cv.rotate(img, cv.ROTATE_180)
cv.imshow('180 Degree image', rot2)
rot3 = cv.rotate(img, cv.ROTATE_90_COUNTERCLOCKWISE)
cv.imshow('90 Degree Counterclockwise Image', rot3)

# Sobel operator
img_gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
img_blur = cv.GaussianBlur(img_gray, (3, 3), 0)
cv.imshow('Grey Image', img_gray)
cv.imshow('Blur Image', img_blur)
sobelx = cv.Sobel(src = img_blur, ddepth = cv.CV_64F, dx = 1, dy = 0, ksize = 5)
sobely = cv.Sobel(src = img_blur, ddepth = cv.CV_64F, dx = 0, dy = 1, ksize = 5)
sobelxy = cv.Sobel(src = img_blur, ddepth = cv.CV_64F, dx = 1, dy = 1, ksize = 5)
cv.imshow('Sobel X', sobelx)
cv.imshow('Sobel Y', sobely)
cv.imshow('Sobel XY', sobelxy)

# Canny operator
canny = cv.Canny(image = img_blur, threshold1 = 100, threshold2 = 200)
cv.imshow('Canny', canny)

eq = cv.equalizeHist(img_gray)
cv.imshow('Equalized Image', eq)

laplacian = cv.Laplacian(img_blur, cv.CV_64F)
cv.imshow('Laplacian', laplacian)

cv.waitKey(0)
cv.destroyAllWindows()