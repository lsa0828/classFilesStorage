import skimage # scikit-image 설치
import numpy as np
import cv2 as cv

orig=skimage.data.horse() # 배경 1, 물체 0(black)
img=255-np.uint8(orig)*255 # 0/1 -> 0/255 -> 255/0
cv.imshow('Horse',img)

contours,hierarchy=cv.findContours(img,cv.RETR_EXTERNAL,cv.CHAIN_APPROX_NONE) # 영상에 존재하는 coutour의 수만큼 배열이 주어짐

img2=cv.cvtColor(img,cv.COLOR_GRAY2BGR)		# 컬러 디스플레이용 영상
cv.drawContours(img2,contours,-1,(255,0,255),2)
cv.imshow('Horse with contour',img2)

contour=contours[0]

m=cv.moments(contour)		# 몇 가지 특징
print(m)

area=cv.contourArea(contour) # m00
cx,cy=m['m10']/m['m00'],m['m01']/m['m00']
perimeter=cv.arcLength(contour,True) # True: 끝 점과 끝 점이 이어져 있다는 것 나타냄
roundness=(4.0*np.pi*area)/(perimeter*perimeter)
print('면적=',area,'\n중점=(',cx,',',cy,')','\n둘레=',perimeter,'\n둥근 정도=',roundness)

img3=cv.cvtColor(img,cv.COLOR_GRAY2BGR)		# 컬러 디스플레이용 영상

contour_approx=cv.approxPolyDP(contour,8,True)	# 직선 근사
cv.drawContours(img3,[contour_approx],-1,(0,255,0),2)
print(contour_approx.shape)
contour_approx=cv.approxPolyDP(contour,20,True)	# 직선 근사
cv.drawContours(img3,[contour_approx],-1,(255,255,0),2)
print(contour_approx.shape)

hull=cv.convexHull(contour)			# 볼록 헐
cv.drawContours(img3,[hull],-1,(0,0,255),2) # 첫 번째 방법
print(hull.shape) # 29개의 점을 연결해서 블록 다각형 만듦

rehull=hull.reshape(1,hull.shape[0],hull.shape[2])
cv.drawContours(img3,rehull,-1,(0,0,255),2) # 두 번째 방법

cv.imshow('Horse with line segments and convex hull',img3)

cv.waitKey()
cv.destroyAllWindows()