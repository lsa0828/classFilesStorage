i, hap, a = 0, 0, 0
num1, num2, num3 = 0, 0, 0

num1=int(input("시작값 입력 : "))
num2=int(input("끝값 입력 : "))
num3=int(input("증가값 입력 : "))

a = num1

while num1<num2+1 :
    hap += num1
    num1 += num3

print("%d에서 %d까지 %d씩 증가시킨 값의 합계 : %d" %(a, num2, num3, hap))
