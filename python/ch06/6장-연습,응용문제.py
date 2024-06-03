'''
#연습문제 8
hap=0
n=1234
while(n<=4567) :
    if n%444==0 :
        hap += n
    n+=1
print(hap)


#연습문제 9
hap=0
for i in range(3333, 10000) :
    if i%1234==0 :
        continue
    if hap+i>100000 :
        break
    hap+=i
print(hap)


#연습문제 11
for i in range(3, 101) :
    for j in range(2, i) :
        if i%j==0 :
            break
    else :
        print(i, end=" ")


#응용문제 01
#사용자에게 문자열로 입력받기
i, k, heartNum = 0, 0, 0
numStr, ch, heartStr = "", "", ""

if __name__=="__main__" :
    numStr=input("숫자를 여러 개 입력하세요: ")
    print("")#한 줄 건너띄어서 하트 출력할 거라서

    i=0
    ch=numStr[i]

    #무한 반복문
    while True:
        heartNum=int(ch)

        heartStr=""
        
        for k in range(0, heartNum) :
            heartStr += "\u2665"

        print(heartStr)

        i += 1
        
        #무한 반복문 빠져나오는 조건
        if (i>len(numStr)-1) :
            break

        ch=numStr[i]
'''
        
#사용자에게 정수로 값을 입력받기
numStr=int(input("숫자를 여러 개 입력하세요: "))
heartNum=[]

while numStr != 0 :
    heartNum.append(numStr % 10)
    numStr=numStr//10

heartNum.reverse()

for i in heartNum:
    for j in range(i) :
        print("\u2665", end="")
    print()
