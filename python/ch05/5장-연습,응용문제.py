'''
#응용문제 01
import random

dice1, dice2, dice3, dice4, dice5, dice6 = [0] * 6 #[0, 0, 0, 0, 0, 0]
throwCount, serialCount = 0, 0

if __name__=="__main__" :
    
    #무한 반복문(break를 만나기 전까지 반복 계속)
    while True :
        throwCount += 1

        dice1=random.randrange(1, 7)
        dice2=random.randrange(1, 7)
        dice3=random.randrange(1, 7)
        dice4=random.randrange(1, 7)
        dice5=random.randrange(1, 7)
        dice6=random.randrange(1, 7)

        #6개 주사위 모두 같은 숫자가 나올 때
        if dice1==dice2==dice3==dice4==dice5==dice6 :
            print('6개의 주사위가 모두 동일한 숫자가 나옴 --> ', dice1, dice2, dice3, dice4, dice5, dice6)
            break

        #6개 주사위 모두 다른 숫자가 나올 때
        elif (dice1==1 or dice2==1 or dice3==1 or dice4==1 or dice5==1 or dice6==1) and\
             (dice1==2 or dice2==2 or dice3==2 or dice4==2 or dice5==2 or dice6==2) and\
             (dice1==3 or dice2==3 or dice3==3 or dice4==3 or dice5==3 or dice6==3) and\
             (dice1==4 or dice2==4 or dice3==4 or dice4==4 or dice5==4 or dice6==4) and\
             (dice1==5 or dice2==5 or dice3==5 or dice4==5 or dice5==5 or dice6==5) and\
             (dice1==6 or dice2==6 or dice3==6 or dice4==6 or dice5==6 or dice6==6) :
            serialCount += 1

print('6개가 동일한 숫자가 나올 때까지 주사위를 던진 횟수 --> ', throwCount)
print('6개가 동일한 숫자가 나올 때까지, 1~6의 연속번호가 나온 횟수 --> ', serialCount)
'''
        
'''
#연습문제 7
import random

A=[]
B=[]
'''
sumA=0
sumB=0
'''
for i in range(2) :
    A.append(random.randrange(1, 7))
    #sumA += A[i]
    B.append(random.randrange(1, 7))
    #sumB += B[i]

print("A의 주사위 숫자는 %d %d입니다."%(A[0],A[1]))
print("B의 주사위 숫자는 %d %d입니다."%(B[0], B[1]))

if (sum(A) > sum(B)) :
    print("A가 이겼습니다.")

elif (sum(A) == sum(B)) :
    print("둘이 비겼네요.")

else :
    print("B가 이겼습니다.")
'''

'''
#연습문제 6
import random

numList = [0] * 20

for i in range(20) :
    #랜덤으로 숫자 뽑기
    num=random.randrange(1, 21)

    #리스트에 저장
    numList[i]=num

print("생성된 리스트 ", numList)

#1~20중 어떤 숫자가 리스트에 있는지 확인
for num in range(1, 21) :
    if num in numList :
        print("숫자 %d는(은) 뽑혔습니다." %num)
'''    


#연습문제 4
score=int(input("점수를 입력하세요: "))

if score >= 90 :
    print("장학생", end='')

elif score >= 60 :
    print("합격", end='')

elif score <60 :
    print("불합격", end='')

#else :
#    print("불합격", end='')

print("입니다.^^")
