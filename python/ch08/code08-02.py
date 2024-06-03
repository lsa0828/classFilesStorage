inStr, outStr='',''
inlen, i=0,0

inStr=input("문자열을 입력하세요.")
inlen=len(inStr)

for i in range(0, inlen) :
    outStr += inStr[inlen-(i+1)]

print(outStr)
