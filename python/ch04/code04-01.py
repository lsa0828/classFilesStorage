money,c500,c100,c50,c10 = 0,0,0,0,0

money=int(input("교환할 돈은 얼마?"))

c500=money//500
money%=500
c100=money//100
money%=100
c50=money//50
money%=50
c10=money//10
money%=10

print("\n500원짜리 ==> %d개" % c500)
print("100원짜리 ==> %d개" % c100)
print("50원짜리 ==> %d개" % c50)
print("10원짜리 ==> %d개" % c10)
print("바꾸지 못한 잔돈==> %d원" % money)
