'''
#연습문제 4
def f1():
    print(var)

def f2():
    var=10#지역변수
    print(var)

var=100#전역변수
f1()
f2()
#-->100\n10


#연습문제 9
(1)모듈은 함수들의 집합으로 볼 수 있다.
(2)파이썬 자체 모듈을 제공하지 않지만 필요하면 직접 모듈을 만들어서 사용할 수 있다.
     >>표준 모듈(파이썬에서 제공), 사용자 정의 모듈(직접 만들어서 사용), 서드 파티 모듈(외부 회사, 단체에서 제공)
(3)mod.py 파일을 임포트하려면 import mod문을 사용하면 된다.
(4)모듈 안의 함수를 호출할 때는 '모듈명[함수명]'형식을 사용한다.
     >>from 모듈명 import 함수명
     >>from 모듈명 import *
     >>ex)from 연습문제4 import f1,f2
(5)패키지는 모듈을 모아 놓은 것으로 파일의 형태로 제공된다.
     >>패키지는 모듈을 모아 높은 것으로 폴더의 형태로 제공된다.
(6)패키지는 주로 'from 패키지명.모듈명 import 함수명'을 사용한다.
'''

#연습문제 10
def func1(v1,v2):
    def func2(num1,num2):
        return num1+num2
    return func2(v1,v2)

def func2(v1,v2):
    return v1+v2

print(func1(100,200))
print(func2(100,200))


#연습문제 11
def addNumber(num):
    '''
    sum=0
    for i in range(1, num+1):
        sum+=i
    return sum
    '''
    if(num<=1):
        return num
    else:
        return num+addNumber(num-1)
print(addNumber(100))
