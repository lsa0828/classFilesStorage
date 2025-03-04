#Version1-합치기
import turtle
import random

def screenLeftClick(x,y):
    global r,g,b
    r=random.random()
    g=random.random()
    b=random.random()
    turtle.pencolor((r,g,b))
    tSize=random.randrange(1,10)
    turtle.shapesize(tSize)
    turtle.pendown()
    turtle.goto(x,y)
    

def screenRightClick(x,y):
    turtle.penup()
    turtle.goto(x,y)

#전역변수
pSize=10
r,g,b=0.0,0.0,0.0

turtle.title('거북이로 그림 그리기')
turtle.shape('turtle')
turtle.pensize(pSize)

turtle.onscreenclick(screenLeftClick, 1)
turtle.onscreenclick(screenRightClick, 3)

turtle.done()

'''
#Version2-적절한 함수 호출
import turtle
import random

def screenLeftClick(x,y):
    global r,g,b
    turtle.pencolor((r,g,b))
    turtle.pendown()
    turtle.goto(x,y)
    screenMidClick(x,y)

def screenRightClick(x,y) :
    turtle.penup()
    turtle.goto(x,y)

def screenMidClick(x,y) :
    global r,g,b
    tSize = random.randrange(1,10)
    turtle.shapesize(tSize)
    r=random.random()
    g=random.random()
    b=random.random()

pSize=10
r,g,b=0.0,0.0,0.0

turtle.title('거북이로 그림 그리기')
turtle.shape('turtle')
turtle.pensize(pSize)

turtle.onscreenclick(screenLeftClick,1)
turtle.onscreenclick(screenRightClick,3)

turtle.done()
'''
