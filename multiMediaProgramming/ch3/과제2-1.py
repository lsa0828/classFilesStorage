import cv2 as cv

img = cv.imread('soccer.jpg')
cv.imshow('original', img)

while(True):
    key = cv.waitKey(1)
    if key == ord('y'):
        img_ycrcb = cv.cvtColor(img, cv.COLOR_RGB2YCrCb)
        skin_mask = cv.inRange(img_ycrcb, (0, 77, 133), (255, 127, 173))
        img_mask = cv.bitwise_and(img, img, mask=skin_mask)
        cv.imshow('ycrcbImage', img_mask)
        break
    elif key == ord('h'):
        img_hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
        skin_mask = cv.inRange(img_hsv, (0, 70, 50), (50, 150, 255))
        img_mask = cv.bitwise_and(img, img, mask=skin_mask)
        cv.imshow('hsvImage', img_mask)
        break

cv.waitKey()
cv.destroyAllWindows()