'''
#연습문제 4
inFp=open("C:/Temp/data1.txt", "r")

inStr=inFp.readline()
print(inStr, end="")

inFp.close()


#연습문제 6
inFp=open("C:/Windows/win.ini", "r")
outFp=open("C:/Temp/data3.txt", "w")

inList=inFp.readlines()
for inStr in inList:
    outFp.writelines(inStr)

inFp.close()
outFp.close()


#연습문제 10
(1)존재하지 않는 변수에 접근할 때
    >>>NameError
    
(2)파일 처리에서 오류가 발생할 때
    >>>IOError
    
(3)실행에서 오류가 발생할 때
    >>>RuntimeError
    
(4)딕셔너리에 키가 없을 때
    >>>KeyError
'''

#연습문제 11
try:
    infp=open("C:/nofile","r")
    value=100/0
except IOError:
    print("파일 입출력 오류입니다.")
except ZeroDivisionError:
    print("0으로 나눴습니다.")

print("프로그램 종료")
