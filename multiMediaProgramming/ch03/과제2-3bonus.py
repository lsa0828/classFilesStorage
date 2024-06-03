import cv2 as cv
import numpy as np

img=cv.imread('rose.png')
img=cv.resize(img,dsize=(0,0),fx=0.5,fy=0.5)
cv.imshow('rotate90', img)

def mouseClick(event,x,y,flags,param):
    global img
    rows, cols = img.shape[:2]

    if event == cv.EVENT_LBUTTONDOWN:
        src_points = np.float32([[0, 0], [0, rows - 1], [cols - 1, 0]])
        dst_points = np.float32([[0, cols - 1], [rows - 1, cols - 1], [0, 0]])
        affine_matrix = cv.getAffineTransform(src_points, dst_points)
        img_symmetry = cv.warpAffine(img, affine_matrix, (rows, cols))
        img = img_symmetry
    elif event == cv.EVENT_RBUTTONDOWN:
        src_points = np.float32([[0, 0], [0, rows - 1], [cols - 1, 0]])
        dst_points = np.float32([[rows - 1, 0], [0, 0], [rows - 1, cols - 1]])
        affine_matrix = cv.getAffineTransform(src_points, dst_points)
        img_symmetry = cv.warpAffine(img, affine_matrix, (rows, cols))
        img = img_symmetry
    cv.imshow('rotate90', img)

cv.setMouseCallback('rotate90', mouseClick)

cv.waitKey()
cv.destroyAllWindows()