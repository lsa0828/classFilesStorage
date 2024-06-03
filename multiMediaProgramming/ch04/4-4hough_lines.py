import cv2 as cv 
import sys
import numpy as np

img = cv.imread('road.jpg')
if img is None:
    sys.exit('파일을 찾을 수 없습니다.')

gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
blur = cv.GaussianBlur(gray, (5, 5), 2, 2)
canny = cv.Canny(blur, 100, 200, 5)

rho, theta = 1,  np.pi / 180 # 누적 행렬의 크기
lines = cv.HoughLinesP(canny, rho, theta, 10, minLineLength=25, maxLineGap=5) # 구성하는 픽셀이 10개 이상이어야 직선으로 판단, 직선의 길이가 최소 20이어야 직선으로 판단, 갭(픽셀 사이의)이 5는 넘지 않아야 직선으로 판단
# 주로 에지영상을 입력
# 직선으로 판단할 threshold

if lines is not None:
    for line in lines:    # 검출된 선 그리기
        print(line)
        x1, y1, x2, y2 = line[0]
        len = np.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
        print(len)
        cv.line(img, (x1,y1), (x2, y2), (0,255,0), 2)

cv.imshow("image", img)

cv.waitKey()
cv.destroyAllWindows()