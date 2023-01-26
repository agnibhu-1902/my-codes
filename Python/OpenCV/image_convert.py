import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

def extraction(img):
    h, w, c = img.shape
    red = np.zeros([h, w], dtype = np.uint8)
    green = blue = red
    for i in range(h):
        for j in range(w):
            red[i, j] = img[i, j, 2]
            green[i, j] = img[i, j, 1]
            blue[i, j] = img[i, j, 0]
    return red, green, blue

def gray_conversion(red, green, blue):
    h, w = red.shape
    grimg = np.zeros([h, w], dtype = np.uint8)
    for i in range(h):
        for j in range(w):
            grimg[i, j] = 0.3 * red[i, j] + 0.59 * green[i, j] + 0.11 * blue[i, j]
    return grimg

def gray_to_binary(img):
    binimg = img
    h, w = img.shape
    t = int(input("Enter the threshold value: "))
    for i in range(h):
        for j in range(w):
            if img[i, j] > t:
                binimg[i, j] = 255
            else:
                binimg[i, j] = 0
    return binimg

def rgb_to_binary(img):
    r, g, b = extraction(img)
    img = gray_conversion(r, g, b)
    binimg = img
    h, w = img.shape
    t = int(input("Enter the threshold value: "))
    for i in range(h):
        for j in range(w):
            if img[i, j] > t:
                binimg[i, j] = 255
            else:
                binimg[i, j] = 0
    return binimg

if __name__ == "__main__":
    img = cv.imread("Photos/flower.png")
    r, g, b = extraction(img)
    grimg = gray_conversion(r, g, b)
    fig = plt.figure(figsize = (18, 18))
    pltX, pltY = 1, 4
    fig.add_subplot(pltX, pltY, 1)
    plt.imshow(cv.cvtColor(img, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title("Original Image")
    fig.add_subplot(pltX, pltY, 2)
    plt.imshow(cv.cvtColor(grimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title("Grayscale Image")
    fig.add_subplot(pltX, pltY, 3)
    binimg = gray_to_binary(grimg)
    plt.imshow(cv.cvtColor(binimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title("Gray to Binary Image")
    fig.add_subplot(pltX, pltY, 4)
    binimg = rgb_to_binary(img)
    plt.imshow(cv.cvtColor(binimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title("RGB to Binary Image")
    fig.show()
    fig.waitforbuttonpress()