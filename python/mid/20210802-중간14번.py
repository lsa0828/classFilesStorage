import random

t, f, n=0, 0, 0

while True :
    a=random.randrange(1, 101)
    b=random.randrange(1, 101)

    ans=int(input("%d + %d의 값은 (0입력 종료)?" %(a, b)))

    if(ans==a+b) :
        print("맞았습니다.")
        t+=1
        n+=1
    elif(ans==0) :
        break
    else :
        print("틀렸습니다.")
        f+=1
        n+=1
        
print("총문제수: %d, 정답: %d, 오답: %d" % (n, t, f))
