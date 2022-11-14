import cv2
import numpy as np
import matplotlib.pyplot as plt

def grey(im):
    h,w,c=im.shape
    gim=np.zeros([h,w])
    gim=gim.astype(np.uint8)
    for i in range(h):
        for j in range(w):
            
            gim[i][j]=((int(im[i][j][0])+int (im[i][j][1])+int(im[i][j][2]))//3)
    return gim

def grey2(im):
    h,w,c=im.shape
    gim=np.zeros([h,w])
    gim=gim.astype(np.uint8)
    for i in range(h):
        for j in range(w):
            gim[i][j]=0.3*im[i][j][2]+0.59*im[i][j][1]+0.1*im[i][j][0]
    
    return gim

im=plt.imread('3_flores.jpg')
im1=plt.imread('3_flores.jpg',0)
ans1=grey(im)
ans2=grey2(im)
fig, axs=plt.subplots(1,3)
axs[0].imshow(im)
axs[0].set_title('RGB IMAGE')
axs[1].imshow(ans1)
axs[1].set_title('GRAY IMAGE USING AVERAGE OF RGB COMPONENTS')
axs[2].imshow(ans2)
axs[2].set_title('GRAY IMAGE USING LUMINOSITY FORM')
plt.waitforbuttonpress()
