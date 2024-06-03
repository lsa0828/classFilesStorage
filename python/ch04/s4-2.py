num=int(input("시프트할 숫자는? "))
a=int(input("출력할 횟수는? "))
a+=1

for i in range(1, a) :
    print("%d << %d = %d" % (num, i, num<<i))

for i in range(1, a) :
    print("%d >> %d = %d" % (num, i, num>>i))
