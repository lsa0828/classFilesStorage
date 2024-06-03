import numpy as np
import cv2 as cv

def embossing(img):
    femboss = np.array([[-1.0, 0.0, 0.0],
                        [0.0, 0.0, 0.0],
                        [0.0, 0.0, 1.0]])
    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    gray16 = np.int16(gray)
    emboss = np.uint8(np.clip(cv.filter2D(gray16, -1, femboss) + 128, 0, 255))

    return emboss

def cartoon(img):
    cartoon = cv.stylization(img, sigma_s=60, sigma_r=0.45)
    return cartoon

def pencilGray(img):
    sketch_gray, _ = cv.pencilSketch(img, sigma_s=60, sigma_r=0.07, shade_factor=0.02)
    return sketch_gray

def pencilColor(img):
    _, sketch_color = cv.pencilSketch(img, sigma_s=60, sigma_r=0.07, shade_factor=0.02)
    return sketch_color

def oilPainting(img):
    oil = cv.xphoto.oilPainting(img, 10, 1, cv.COLOR_BGR2Lab)
    return oil

def enhance(img):
    detail = cv.detailEnhance(img, sigma_s=10, sigma_r=0.15) # sigma_s가 크면 클수록 더 뭉그러지고 sigma_r이 클수록 에지가 더 선명해짐
    return detail