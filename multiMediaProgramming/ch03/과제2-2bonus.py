import cv2 as cv
import sys
import cvlib as cvl

cap = cv.VideoCapture('face2.mp4')

if not cap.isOpened():
    sys.exit('카메라 연결 실패')

ksize = 31

while True:
    ret, frame = cap.read()

    if not ret:
        print('프레임 획득에 실패하여 루프를 나갑니다.')
        break

    faces, confidences = cvl.detect_face(frame)
    for (x, y, x2, y2), conf in zip(faces, confidences):
        roi = frame[y:y2, x:x2]
        roi = cv.GaussianBlur(roi, (ksize, ksize), 0.0)
        frame[y:y2, x:x2] = roi

    cv.imshow('face detection', frame)

    key = cv.waitKey(1)
    if key == ord('q'):
        break

cap.release()
cv.destroyAllWindows()
