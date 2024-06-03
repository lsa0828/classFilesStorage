import cv2 as cv
import matplotlib.pyplot as plt

img=cv.imread('soccer.jpg') 
hr=cv.calcHist([img],[2],None,[256],[0,256]) # 2번 채널인 R(red) 채널에서 히스토그램 구함, [] 안하면 타입이 맞지 않다고 오류, 색상 개수, 범위 => 1차원 배열 반환
plt.plot(hr,color='r',linewidth=1)

hg=cv.calcHist([img],[1],None,[256],[0,256]) # 1번 채널인 G(green) 채널에서 히스토그램 구함, [] 안하면 타입이 맞지 않다고 오류, 색상 개수, 범위 => 1차원 배열 반환
plt.plot(hg,color='g',linewidth=2, linestyle="dotted")

hb=cv.calcHist([img],[0],None,[256],[0,256]) # 0번 채널인 B(blue) 채널에서 히스토그램 구함
plt.plot(hb,color='b',linewidth=3, linestyle="dashed")

plt.show()