'''
#응용문제01
year=0

if __name__=="__main__" :
    year=int(input("연도를 입력하세요:"))

    if((year%4==0)and(year%100!=0)) or (year%400==0) :
        print("%d년은 윤년입니다." %year)

    else :
        print("%d년은 윤년이 아닙니다." %year)
'''

'''
#응용문제02
import turtle

num=0
swidth, sheight=1000, 300
curX, curY=0, 0

if __name__=="__main__" :
    turtle.title('거북이로 2진수 표현하기')
    turtle.shape('turtle')
    turtle.setup(width=swidth+50, height=sheight+50) #그래픽 창크기 지정
    turtle.screensize(swidth, sheight)
    turtle.penup()
    turtle.left(90)

    num=int(input("숫자로 입력하세요:"))
    binary=bin(num) #ex. 5->ob101

    curX=swidth/2
    curY=0

    for i in range(len(binary)-2) :#비트의 길이를 구해주는 len/2를 빼주는 이유는 ob를 빼기 위해
        turtle.goto(curX, curY)

        #각각의(최하위) 비트값 알아내기
        if num&1 :
            turtle.color('red')
            turtle.turtlesize(2)

        else :
            turtle.color('blue')
            turtle.turtlesize(1)
            
        #최하위 비트값 알아내고 >>(쉬프트)를 이용해서 맨오른쪽에 있는 것은 빼고 이동
        turtle.stamp()
        curX-=50
        num>>=1 #num=num>>1

turtle.done()
'''

'''
#연습문제10
import turtle

num=0
swidth, sheight=1000,300
curX, curY=0, 0

if __name__=="__main__" :
    turtle.title('거북이로 2진수 표현하기')
    turtle.shape('turtle')
    turtle.setup(width=swidth+50, height=sheight+50) #그래픽 창크기 지정
    turtle.screensize(swidth, sheight)
    turtle.penup()
    turtle.left(90)

    num1=input("2진수를 입력하세요:")
    num2=input("2진수를 입력하세요:")
    
    num1=int(num1, 2) #int('', 2)
    num2=int(num2, 2)

    result=num1|num2

    curX=swidth/2
    curY=0
    
    def printTurtle(num) :
        global curX, curY
        binary=bin(num)

        for i in range(len(binary)-2) :
            turtle.goto(curX, curY)

            if num&1 :
                turtle.color('red')
                turtle.turtlesize(2)

            else :
                turtle.color('blue')
                turtle.turtlesize(1)

            turtle.stamp()
            curX-=50
            num>>=1

        curX=swidth/2
        curY-=50

    printTurtle(num1)
    printTurtle(num2)
    printTurtle(result)

turtle.done()
'''

'''
#연습문제6
num1, num2=-100, 100

print((num1==num2) and (num1!=num2))
print((num1==num2) or (num1!=num2))
print((num1>=num2) and (num1<=num2))
print((num1>=num2) or (num1<=num2))
'''


#연습문제9
c500=c100=c50=c10=0

c500=int(input("500원짜리 개수 --> "))
c100=int(input("100원짜리 개수 --> "))
c50=int(input("50원짜리 개수 --> "))
c10=int(input("10원짜리 개수 --> "))

sum=(500*c500)+(100*c100)+(50*c50)+(10*c10)

print("##동전의 합계 ==> %d원" %sum)

