Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
None
[None]*6
[None, None, None, None, None, None]
[a]*6
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    [a]*6
NameError: name 'a' is not defined
type(None)
<class 'NoneType'>
import turtle
import random
turtle.getshapes()
['arrow', 'blank', 'circle', 'classic', 'square', 'triangle', 'turtle']
shapeList=turtle.getshapes()
shapeList
['arrow', 'blank', 'circle', 'classic', 'square', 'triangle', 'turtle']
random.shuffle(shapeList)
shapeList
['circle', 'square', 'blank', 'triangle', 'turtle', 'classic', 'arrow']
tt1=(10, 20, 30)
tt1
(10, 20, 30)
tt1=(10, 20, 30); tt1
(10, 20, 30)
a=[0]
a*6
[0, 0, 0, 0, 0, 0]
type(tt1)
<class 'tuple'>
tt1[0]
10
tt1[1]
20
tt2=10, 20, 30
tt2
(10, 20, 30)
tt3=(10);tt3
10
type(tt3)
<class 'int'>
tt4=10;type(tt4)
<class 'int'>
tt5=10,
type(tt5)
<class 'tuple'>
tt1
(10, 20, 30)
tt1[0]=40
Traceback (most recent call last):
  File "<pyshell#27>", line 1, in <module>
    tt1[0]=40
TypeError: 'tuple' object does not support item assignment
del(tt1[0])
Traceback (most recent call last):
  File "<pyshell#28>", line 1, in <module>
    del(tt1[0])
TypeError: 'tuple' object doesn't support item deletion
del(tt1)
tt1
Traceback (most recent call last):
  File "<pyshell#30>", line 1, in <module>
    tt1
NameError: name 'tt1' is not defined. Did you mean: 'tt2'?
tt2
(10, 20, 30)
tt1=10,20,30,40
tt1[0]+tt1[1]
30
tt
Traceback (most recent call last):1
  File "<pyshell#34>", line 1, in <module>
    tt
NameError: name 'tt' is not defined. Did you mean: 'tt2'?
tt1[1:3]
(20, 30)
tt1[:3}
SyntaxError: closing parenthesis '}' does not match opening parenthesis '['
tt1[1:3]
(20, 30)
tt1[:3]
(10, 20, 30)

tt2='A','B'
tt1+tt2
(10, 20, 30, 40, 'A', 'B')
tt2*3
('A', 'B', 'A', 'B', 'A', 'B')

myTuple=(10,20,30)
myList=list(myTuple)
myList
[10, 20, 30]
myList.append(40)
myList
[10, 20, 30, 40]
myTyple=tuple(myList)
myTyple
(10, 20, 30, 40)

dic1={1:'a',2:'b',3:'c'}
dic1
{1: 'a', 2: 'b', 3: 'c'}
type(dic1)
<class 'dict'>
dic2={'a':1,'b':2,'c':3}
dic2
{'a': 1, 'b': 2, 'c': 3}

dic3={123:[1,'a']}
dic3
{123: [1, 'a']}
s1={'학번':1000,'이름':'홍길동','학과':'컴퓨터학과'}
s1
{'학번': 1000, '이름': '홍길동', '학과': '컴퓨터학과'}
s1['학번']
1000
s1['연락처']='010-1111-2222'
s1
{'학번': 1000, '이름': '홍길동', '학과': '컴퓨터학과', '연락처': '010-1111-2222'}
s1['학번']=100
s1
{'학번': 100, '이름': '홍길동', '학과': '컴퓨터학과', '연락처': '010-1111-2222'}
del(s1['학과'])
s1
{'학번': 100, '이름': '홍길동', '연락처': '010-1111-2222'}
s1={'학번':1000,'이름':'홍길동','학과':'컴퓨터학과','학번':1200}
s1
{'학번': 1200, '이름': '홍길동', '학과': '컴퓨터학과'}
s1.get('이름')
'홍길동'
s1
{'학번': 1200, '이름': '홍길동', '학과': '컴퓨터학과'}
s1['연락처']
Traceback (most recent call last):
  File "<pyshell#73>", line 1, in <module>
    s1['연락처']
KeyError: '연락처'
s1.get('연락처')
s1.keys()
dict_keys(['학번', '이름', '학과'])
s1.items()
dict_items([('학번', 1200), ('이름', '홍길동'), ('학과', '컴퓨터학과')])
s1.values()
dict_values([1200, '홍길동', '컴퓨터학과'])
'이름' in s1
True
'연락처' in s1
False

s1
{'학번': 1200, '이름': '홍길동', '학과': '컴퓨터학과'}
for k in s1.keys() :
    print("%s --> %s" % (k, s1[k1]))

Traceback (most recent call last):
  File "<pyshell#85>", line 2, in <module>
    print("%s --> %s" % (k, s1[k1]))
NameError: name 'k1' is not defined. Did you mean: 's1'?

for k in s1.keys() :
    print('%s --> %s' % (k, s1[k1]))

Traceback (most recent call last):
  File "<pyshell#88>", line 2, in <module>
    print('%s --> %s' % (k, s1[k1]))
NameError: name 'k1' is not defined. Did you mean: 's1'?

for k in s1.keys() :
    print("%s --> %s" % (k, s1[k]))

학번 --> 1200
이름 --> 홍길동
학과 --> 컴퓨터학과
s1['주소']='경기도'
s1
{'학번': 1200, '이름': '홍길동', '학과': '컴퓨터학과', '주소': '경기도'}
for k in s1.keys():
    print("%s --> %s" %(k, s1[k]))

학번 --> 1200
이름 --> 홍길동
학과 --> 컴퓨터학과
주소 --> 경기도

a=[]
import operator
a=sorted(s1.items().key=operator.itemgetter(0))
SyntaxError: expression cannot contain assignment, perhaps you meant "=="?
a=sorted(s1.items(),key=operator.itemgetter(0))
a
[('이름', '홍길동'), ('주소', '경기도'), ('학과', '컴퓨터학과'), ('학번', 1200)]
s1
{'학번': 1200, '이름': '홍길동', '학과': '컴퓨터학과', '주소': '경기도'}

====================== RESTART: C:/Cookpython/code07-07.py =====================

Warning (from warnings module):
  File "C:/Cookpython/code07-07.py", line 17
    tX=random.randrange(-swidth/2, swidth/2)
DeprecationWarning: non-integer arguments to randrange() have been deprecated since Python 3.10 and will be removed in a subsequent version

Warning (from warnings module):
  File "C:/Cookpython/code07-07.py", line 18
    tY=random.randrange(-sheight/2, sheight/2)
DeprecationWarning: non-integer arguments to randrange() have been deprecated since Python 3.10 and will be removed in a subsequent version
Traceback (most recent call last):
  File "C:/Cookpython/code07-07.py", line 28, in <module>
    myTurtle.goto(tList[1], tList[2])
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 1777, in goto
    self._goto(Vec2D(x, y))
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 3178, in _goto
    screen._drawline(self.drawingLineItem,
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 544, in _drawline
    self.cv.coords(lineitem, *cl)
  File "<string>", line 1, in coords
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 2795, in coords
    self.tk.call((self._w, 'coords') + args))]
_tkinter.TclError: invalid command name ".!canvas"

======================== RESTART: C:/Cookpython/s7-4.py ========================
((1, 2, 3), (4, 5, 6), (7, 8, 9))

======================== RESTART: C:/Cookpython/s7-4.py ========================
1 2 3 4 5 6 7 8 9 

======================== RESTART: C:/Cookpython/s7-4.py ========================
1 2 3 

4 5 6 

7 8 9 


======================== RESTART: C:/Cookpython/s7-4.py ========================
1 2 3 	
4 5 6 	
7 8 9 	
present1={'과일종류':'사과', '과일개수':10, '꽃':'장미'}
present1
{'과일종류': '사과', '과일개수': 10, '꽃': '장미'}
present1['꽃개수']=5
present1
{'과일종류': '사과', '과일개수': 10, '꽃': '장미', '꽃개수': 5}
present1['꽃']='튤립'
present1
{'과일종류': '사과', '과일개수': 10, '꽃': '튤립', '꽃개수': 5}
del(present['과일개수'])
Traceback (most recent call last):
  File "<pyshell#110>", line 1, in <module>
    del(present['과일개수'])
NameError: name 'present' is not defined. Did you mean: 'present1'?
del(present1['과일개수'])
present1
{'과일종류': '사과', '꽃': '튤립', '꽃개수': 5}
present['꽃']
Traceback (most recent call last):
  File "<pyshell#113>", line 1, in <module>
    present['꽃']
NameError: name 'present' is not defined. Did you mean: 'present1'?
present1['꽃']
'튤립'
present1.get('꽃')
'튤립'
present1.keys()
dict_keys(['과일종류', '꽃', '꽃개수'])
present1.items()
dict_items([('과일종류', '사과'), ('꽃', '튤립'), ('꽃개수', 5)])
present1.values()
dict_values(['사과', '튤립', 5])
'과일종류' in present1
True
present1[0]
Traceback (most recent call last):
  File "<pyshell#120>", line 1, in <module>
    present1[0]
KeyError: 0

====================== RESTART: C:/Cookpython/code07-08.py =====================
이름 --> 이수아
학교 --> 덕성여대
학번 --> 20210802
학과 --> 컴퓨터학과

====================== RESTART: C:/Cookpython/code07-09.py =====================
[('이름', '이수아'), ('학과', '컴퓨터학과'), ('학교', '덕성여대'), ('학번', 20210802)]

====================== RESTART: C:/Cookpython/code07-10.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code07-10.py", line 3, in <module>
    while(Ture) :
NameError: name 'Ture' is not defined

====================== RESTART: C:/Cookpython/code07-10.py =====================
['밥류', '면류', '빵류']중 좋아하는 음식류는?면류
<면류> 중에서 <우동>를 추천합니다.
['밥류', '면류', '빵류']중 좋아하는 음식류는?밥류
<밥류> 중에서 <김치볶음밥>를 추천합니다.
['밥류', '면류', '빵류']중 좋아하는 음식류는?일식
그런 음식류는 없습니다. 확인해 보세요.
['밥류', '면류', '빵류']중 좋아하는 음식류는?끝

====================== RESTART: C:/Cookpython/code07-10.py =====================
['밥류', '면류', '빵류', '떡류']중 좋아하는 음식류는?떡류
<떡류> 중에서 <꿀떡>를 추천합니다. 
['밥류', '면류', '빵류', '떡류']중 좋아하는 음식류는?끝

====================== RESTART: C:/Cookpython/code07-10.py =====================
['밥류', '면류', '빵류', '떡류']중 좋아하는 음식류는? 밥류
<밥류> 중에서 <김치볶음밥>를 추천합니다.
['밥류', '면류', '빵류', '떡류']중 좋아하는 음식류는? ㅇㄹ
그런 음식류는 없습니다. 확인해 보세요.
['밥류', '면류', '빵류', '떡류']중 좋아하는 음식류는? 끝

ms={1,2,3,4,5}
type(ms)
<class 'set'>
list1=[1,2,3,4,5]
list1
[1, 2, 3, 4, 5]
ms
{1, 2, 3, 4, 5}
ms2={1,2,3,4,5,1,2,3,4}
list2=[1,2,3,4,5,1,2,3,4]
ms2
{1, 2, 3, 4, 5}
list2
[1, 2, 3, 4, 5, 1, 2, 3, 4]

set(list2)
{1, 2, 3, 4, 5}
list2
[1, 2, 3, 4, 5, 1, 2, 3, 4]

ms1={1,2,3,4,5}
ms2={4,5,6,7}
ms1&ms2
{4, 5}
ms1|ms2
{1, 2, 3, 4, 5, 6, 7}
ms1-ms2
{1, 2, 3}
ms^ms2
{1, 2, 3, 6, 7}
ms1.intersection(ms2)
{4, 5}
ms1.union(ms2)
{1, 2, 3, 4, 5, 6, 7}
ms1.difference(ms2)
{1, 2, 3}
ms1.synmetric_difference(ms2)
Traceback (most recent call last):
  File "<pyshell#145>", line 1, in <module>
    ms1.synmetric_difference(ms2)
AttributeError: 'set' object has no attribute 'synmetric_difference'. Did you mean: 'symmetric_difference'?
ms1.symmetric_difference(ms2)
{1, 2, 3, 6, 7}

n=[]
for i in range(1, 6) :
    n.append(i)

    
n
[1, 2, 3, 4, 5]

n2=[i for i in range(1,6)]
n2
[1, 2, 3, 4, 5]
n2=[i*2 for i in range(1,6)]
n2
[2, 4, 6, 8, 10]

n3=[i*2 for i in range(1,21) if i%2==0]
n3
[4, 8, 12, 16, 20, 24, 28, 32, 36, 40]

foods=['떡볶이','자장면','라면','피자','치킨','삼겹살']
sides=['오뎅','단무지','김치']

for food,side in zip(foods.sides) :
    print(food,'-->',side)

Traceback (most recent call last):
  File "<pyshell#168>", line 1, in <module>
    for food,side in zip(foods.sides) :
AttributeError: 'list' object has no attribute 'sides'
for food,side in zip(foods,sides) :
    print(food,'-->',side)

    
떡볶이 --> 오뎅
자장면 --> 단무지
라면 --> 김치

tuplist=zip(foods, sides)
tuplist
<zip object at 0x000001892A34F600>
tuplist=list(zip(foods,sides))
tuplist
[('떡볶이', '오뎅'), ('자장면', '단무지'), ('라면', '김치')]

type(tuplist)
<class 'list'>
dic=dict(zip(foods,sides))
dic
{'떡볶이': '오뎅', '자장면': '단무지', '라면': '김치'}


oldList=['자장면','탕수육','군만두']
newList=oldList

oldList
['자장면', '탕수육', '군만두']
newList
['자장면', '탕수육', '군만두']
oldList[0]='짬뽕'
oldList
['짬뽕', '탕수육', '군만두']
newList
['짬뽕', '탕수육', '군만두']
oldList.append("깍두기")
oldList
['짬뽕', '탕수육', '군만두', '깍두기']
newList
['짬뽕', '탕수육', '군만두', '깍두기']
newList.append('밥')
newList
['짬뽕', '탕수육', '군만두', '깍두기', '밥']
oldList
['짬뽕', '탕수육', '군만두', '깍두기', '밥']


newList2=oldList[:]
newList2.append('볶은밥')
newList2
['짬뽕', '탕수육', '군만두', '깍두기', '밥', '볶은밥']
oldList
['짬뽕', '탕수육', '군만두', '깍두기', '밥']
oldList[0]='자장면'
oldList
['자장면', '탕수육', '군만두', '깍두기', '밥']
newList2
['짬뽕', '탕수육', '군만두', '깍두기', '밥', '볶은밥']


parking=[]
top=0
parking.append('차1')
top=top+1
parking.append('차2')
top+=2
parking
['차1', '차2']

outCar=parking.pop()
outCar
'차2'
parking
['차1']
top=top-1
type(parking)
<class 'list'>
