import cv2 as cv
import sys

img=cv.imread('soccer.jpg')	# 영상 읽기, 입력 영상을 읽어 array로 저장

if img is None:
    sys.exit('파일을 찾을 수 없습니다.')
    
cv.imshow('Image Display',img)	# 윈도우에 영상 표시, Image Display = 창의 타이틀

print(type(img)) # img의 타입
print(img.shape) # img 배열의 크기
print(img[850][50][0], img[850][50][1], img[850][50][2])

cv.waitKey() # 영상을 볼 수 있도록 기다림, 아무키나 눌릴 때까지 기다림
cv.destroyAllWindows() # 모든 윈도우 종료