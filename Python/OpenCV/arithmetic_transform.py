import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

def image_addition(img1, img2):
    h, w = img1.shape
    imgadd = np.zeros((h, w), dtype = np.float32)
    for i in range(h):
        for j in range(w):
            imgadd[i, j] = int(img1[i, j]) + int(img2[i, j])
    return image_normalization(imgadd)

def image_subtraction(img1, img2):
    h, w = img1.shape
    imgsub = np.zeros((h, w), dtype = np.float32)
    for i in range(h):
        for j in range(w):
            imgsub[i, j] = int(img1[i, j]) - int(img2[i, j])
    return image_normalization(imgsub)

def image_multiplication(img1, img2):
    h, w = img1.shape
    newimg = np.zeros([h, w], dtype = np.float32)
    for i in range(h):
        for j in range(w):
            newimg[i, j] = int(img1[i, j]) * int(img2[i, j])
    return image_normalization(newimg)

def image_division(img1, img2):
    h, w = img1.shape
    newimg = np.zeros([h, w], dtype = np.float32)
    for i in range(h):
        for j in range(w):
            if img1[i, j] == 0:
                newimg[i, j] = img2[i, j]
            elif img2[i, j] == 0:
                newimg[i, j] = img1[i, j]
            else:
                newimg[i, j] = int(img1[i, j]) // int(img2[i, j])
    return image_normalization(newimg)

def image_normalization(img):
    h, w = img.shape
    newimg = np.zeros((h, w), dtype = np.uint8)
    min = np.min(img)
    max = np.max(img)
    for i in range(h):
        for j in range(w):
            newimg[i, j] = (255 * (img[i, j] - min) / (max - min)).astype(int)
    return newimg

if __name__ == "__main__":
    img1 = cv.imread('Photos/cycle.jpeg', 0)
    img2 = cv.imread('Photos/rabbit.jpeg', 0)
    imgadd = image_addition(img1, img2)
    imgsub = image_subtraction(img1, img2)
    imgmul = image_multiplication(img1, img2)
    imgdiv = image_division(img1, img2)
    fig = plt.figure(figsize = (18, 18))
    pltX, pltY = 3, 2
    fig.add_subplot(pltX, pltY, 1)
    plt.imshow(cv.cvtColor(img1, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('First Image')
    fig.add_subplot(pltX, pltY, 2)
    plt.imshow(cv.cvtColor(img2, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Second Image')
    fig.add_subplot(pltX, pltY, 3)
    plt.imshow(cv.cvtColor(imgadd, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Image Addition')
    fig.add_subplot(pltX, pltY, 4)
    plt.imshow(cv.cvtColor(imgsub, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Image Subtraction')
    fig.add_subplot(pltX, pltY, 5)
    plt.imshow(cv.cvtColor(imgmul, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Image Multiplication')
    fig.add_subplot(pltX, pltY, 6)
    plt.imshow(cv.cvtColor(imgdiv, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Image Division')
    fig.show()
    plt.waitforbuttonpress()
