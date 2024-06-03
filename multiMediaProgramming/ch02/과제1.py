import cv2 as cv
import numpy as np
import math

img = np.zeros((600,900,3), np.uint8)
img[:] = (255,255,255)

red = (0,0,255)
green = (0,255,0)
blue = (255,0,0)

def draw(event,x,y,flags,param):
    global gx, gy
    if event==cv.EVENT_LBUTTONDOWN or event==cv.EVENT_RBUTTONDOWN:
        gx, gy = x, y
    elif event==cv.EVENT_LBUTTONUP and flags==cv.EVENT_FLAG_SHIFTKEY:
        cv.line(img,(gx,gy),(x,y),red,2)
    elif event==cv.EVENT_LBUTTONUP and flags==cv.EVENT_FLAG_ALTKEY:
        cv.rectangle(img,(gx,gy),(x,y),blue,2)
    elif event==cv.EVENT_RBUTTONUP and flags==cv.EVENT_FLAG_ALTKEY:
        cv.rectangle(img,(gx,gy),(x,y),blue,-1)
    elif event==cv.EVENT_LBUTTONUP and flags==cv.EVENT_FLAG_CTRLKEY:
        cv.circle(img,(int((gx+x)/2),int((gy+y)/2)),int(math.sqrt((x-gx)**2+(y-gy)**2)/2),green,2)
    elif event==cv.EVENT_RBUTTONUP and flags==cv.EVENT_FLAG_CTRLKEY:
        cv.circle(img,(int((gx+x)/2),int((gy+y)/2)),int(math.sqrt((x-gx)**2+(y-gy)**2)/2),green,-1)
    elif event==cv.EVENT_MOUSEMOVE and flags==cv.EVENT_FLAG_LBUTTON:
        cv.circle(img,(x,y),5,blue,-1)
    elif event==cv.EVENT_MOUSEMOVE and flags==cv.EVENT_FLAG_RBUTTON:
        cv.circle(img,(x,y),5,red,-1)

    cv.imshow('Painting',img)		# 수정된 영상을 다시 그림

cv.namedWindow('Painting')
cv.imshow('Painting',img)

cv.setMouseCallback('Painting',draw)

while(True):
    if cv.waitKey(1) == ord('q'):
        cv.destroyAllWindows()
        break