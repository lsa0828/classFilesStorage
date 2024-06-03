import cv2 as cv
import sys

cap = cv.VideoCapture('face2.mp4')

if not cap.isOpened():
    sys.exit('카메라 연결 실패')

while True:
    ret, frame = cap.read()

    if not ret:
        print('프레임 획득에 실패하여 루프를 나갑니다.')
        break

    ycrcb_img = cv.cvtColor(frame, cv.COLOR_RGB2YCrCb)
    skin_mask = cv.inRange(ycrcb_img, (0, 77, 133), (255, 127, 173))
    img_skin = cv.bitwise_and(frame, frame, mask=skin_mask)

    cv.imshow('skin color detection', img_skin)

    key = cv.waitKey(1)
    if key == ord('q'):
        break

cap.release()
cv.destroyAllWindows()