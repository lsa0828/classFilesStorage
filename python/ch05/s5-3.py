num=int(input("*** 숫자를 입력하세요 : "))
a=[]

for i in range(2, num) :
    a.append(num%i)

if 0 in a :
    print("%d는 소수가 아닙니다." %num)

else :
    print("%d는 소수입니다." %num)
