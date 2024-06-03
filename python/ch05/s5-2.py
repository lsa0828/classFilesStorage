num1, num2, a, answer = 0, 0, 0, 0

num1=int(input("첫 번째 숫자를 입력하세요 : "))
num2=int(input("두 번째 숫자를 입력하세요 : "))
a=int(input("더할 숫자를 입력하세요 : "))

for i in range(num1, num2+1, a) :
    answer += i
    

print("%d+%d+...+%d는 %d입니다."%(num1, num1+a, num2, answer))
