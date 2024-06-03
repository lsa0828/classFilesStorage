money=int(input("저축한 금액?"))
dlwk=int(input("금리는? (7%일경우 7입력)"))

i=0
n=money

while True :
    money = (money * dlwk * 0.01) + money
    i+=1
    if(money>=2*n) :
        break
    
print("현저축액: %d, 2배까지 걸리는 기간: %d 년" % (n, i))
