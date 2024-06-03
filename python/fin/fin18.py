def addNumber(num):
    global su, n
    su+=n
    if n <= num:
        n+=1
        addNumber(num)
    else:
        return sum

su, n=0, 0
num=int(input("정수값 입력:"))
print(addNumber(num))
