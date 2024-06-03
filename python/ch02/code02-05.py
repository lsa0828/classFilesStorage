#함수 선언


#변수 선언


#메인 (main) 코드 부분

###

import turtle
#함수선언

#변수선언
myT=None

#메인코드
myT=turtle.Turtle()
myT.shape('turtle')

for i in range (0, 4) :
    myT.forward(200)
    myT.right(90)

myT.done()
