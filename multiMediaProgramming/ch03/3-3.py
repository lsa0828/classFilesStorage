import cv2 as cv
import sys

img=cv.imread('soccer.jpg')
gray=cv.imread('soccer.jpg', cv.IMREAD_GRAYSCALE)
            
#t,bin_img=cv.threshold(img[:,:,2],0,255,cv.THRESH_BINARY+cv.THRESH_OTSU) # 2번 값인 R 채널에서 구함, 가장 적절한 임계값 찾아서 반환, 그 임계값으로 이진화된 이미지 반환
t,bin_img=cv.threshold(gray,0,255,cv.THRESH_BINARY+cv.THRESH_OTSU)
print('오츄 알고리즘이 찾은 최적 임곗값=',t)

#cv.imshow('R channel',img[:,:,2])			# R 채널 영상
cv.imshow('Gray',gray)			# gray 채널 영상
cv.imshow('Gray binarization',bin_img)	# R 채널 이진화 영상

cv.waitKey()
cv.destroyAllWindows()