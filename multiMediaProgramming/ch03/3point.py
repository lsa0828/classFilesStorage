import cv2 as cv
import sys
import numpy as np

img=cv.imread('soccer.jpg')
#1
gray=cv.imread('soccer.jpg', cv.IMREAD_GRAYSCALE) # BGR 컬러 영상을 명암 영상으로 변환하여 저장

if gray is None:
    sys.exit('파일을 찾을 수 없습니다.')

#gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)	# BGR 컬러 영상을 명암 영상으로 변환
gray_small=cv.resize(gray,dsize=(0,0),fx=0.25,fy=0.25)

#cv.imshow('soccer-gray',gray_small)
print(gray_small.shape)

#2 사칙연산 함수
img_plus = cv.add(gray_small, 50)         # y = x + 50
img_minus = cv.subtract(gray_small, 50)   # y = x - 50
img_multi = cv.multiply(gray_small, 2)    # y = 2 * x
img_div = cv.divide(gray_small, 2)        # y = x / 2
pp=np.hstack((img_plus, img_minus, img_multi, img_div)) # hstack은 높이(세로)가 같아야 함
#cv.imshow('point processing',pp)

#3 사칙연산 연산자
img_plus2 = gray_small+50       # y = x + 50
img_minus2 = gray_small-50      # y = x - 50
img_multi2 = gray_small*2       # y = 2 * x
img_div2 = gray_small/2         # y = x / 2

#4
#cv.imshow('test',img_plus2) # 오버플로우됨
#print(gray_small[100,100], img_plus[100,100], img_plus2[100,100]) # 72
#print(gray_small[180,80], img_plus[180,80], img_plus2[180,80]) # 226

#5
#cv.imshow('test',img_minus2)
#print(gray_small[100,100], img_minus[100,100], img_minus2[100,100]) # 72
#print(gray_small[120,180], img_minus[120,180], img_minus2[120,180]) # 27

#6 이미지 합치기1
img512=cv.resize(img,dsize=(512,512)) # dsize에는 비율 또는 크기를 넣음
opencv_img=cv.imread('opencv_logo512.png')
img_plus3 = cv.add(img512, opencv_img) # 이미지(0~255)와 이미지(0~255) 더함 => 0~510이 나오므로 255보다 큰 수는 모두 흰색 처리
#cv.imshow('two images - add',img_plus3)

#7 이미지 합치기2
img_plus4 = cv.addWeighted(img512, 0.5, opencv_img, 0.5, 0) # 이미지와 이미지를 0.5씩 비율적으로 더함
#cv.imshow('two images - addWeighted',img_plus4)

#8 색 반전
img_rev = cv.subtract(255,gray_small)     # y = 255 - x
#cv.imshow('reverse image',img_rev)

#9 이진화
ret, img_binary50 = cv.threshold(gray_small, 50, 255, cv.THRESH_BINARY) # ret은 boolean, img_binary50이 이미지
#cv.imshow('threshold',img_binary50)

ret, img_binary100 = cv.threshold(gray_small, 100, 255, cv.THRESH_BINARY)
ret, img_binary150 = cv.threshold(gray_small, 150, 255, cv.THRESH_BINARY)
ret, img_binary200 = cv.threshold(gray_small, 200, 255, cv.THRESH_BINARY)
img_binary=np.hstack((img_binary50, img_binary100, img_binary150, img_binary200))
#cv.imshow('threshold',img_binary)

ret, img_binaryB = cv.threshold(gray_small, 100, 255, cv.THRESH_BINARY)
ret, img_binaryBINV = cv.threshold(gray_small, 100, 255, cv.THRESH_BINARY_INV)
ret, img_binaryT = cv.threshold(gray_small, 100, 255, cv.THRESH_TRUNC)
ret, img_binaryT0 = cv.threshold(gray_small, 100, 255, cv.THRESH_TOZERO)
ret, img_binaryT0INV = cv.threshold(gray_small, 100, 255, cv.THRESH_TOZERO_INV)
img_binary2=np.hstack((img_binaryB, img_binaryBINV, img_binaryT, img_binaryT0, img_binaryT0INV))
cv.imshow('threshold',img_binary2)

cv.waitKey()
cv.destroyAllWindows()