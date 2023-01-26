import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv

def avg(img1, img2):
    h, w = img1.shape
    newimg = np.zeros((h, w), dtype = np.uint8)
    for i in range(h):
        for j in range(w):
            newimg[i, j] = (int(img1[i, j]) + int(img2[i, j])) // 2
    return newimg

if __name__ == "__main__":
    img1 = cv.imread('Photos/cycle.jpeg', 0)
    img2 = cv.imread('Photos/rabbit.jpeg', 0)
    newimg = avg(img1, img2)
    fig = plt.figure(figsize = (18, 18))
    pltX, pltY = 1, 3
    fig.add_subplot(pltX, pltY, 1)
    plt.imshow(cv.cvtColor(img1, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Original Image 1')
    fig.add_subplot(pltX, pltY, 2)
    plt.imshow(cv.cvtColor(img2, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Original Image 2')
    fig.add_subplot(pltX, pltY, 3)
    plt.imshow(cv.cvtColor(newimg, cv.COLOR_BGR2RGB))
    plt.axis('off')
    plt.title('Image Average')
    fig.show()
    plt.waitforbuttonpress()
