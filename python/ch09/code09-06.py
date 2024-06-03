def func1():
    a=10 #새로운 a(지역변수)
    print("func1()에서 a=", a)

def func2():
    print("func2()에서 a=", a) #메인코드 a(전역변수)

a=20

func1()
func2()
