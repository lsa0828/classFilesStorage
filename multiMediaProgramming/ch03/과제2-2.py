import cv2 as cv
import cvlib as cvl

ksize = 31

img = cv.imread('face2.jpg')

faces, confidences = cvl.detect_face(img)

for (x,y, x2,y2), conf in zip(faces, confidences):
    roi = img[y:y2, x:x2]
    roi = cv.GaussianBlur(roi, (ksize,ksize), 0.0)
    img[y:y2, x:x2] = roi

cv.imshow('face detection', img)

cv.waitKey()
cv.destroyAllWindows()