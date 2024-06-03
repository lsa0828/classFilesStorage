Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
a=99
if a<100 :
    print("100보다 작음")

100보다 작음
a=200
if a<100 :
    print("100보다 작음")
else :
    print("100보다 큼")
print("끝")
SyntaxError: invalid syntax


===================== RESTART: C:/Cookpython/code05-test.py ====================
100보다 큼
끝

===================== RESTART: C:/Cookpython/code05-test.py ====================
100보다 큼
끝
정수입력95
홀수

===================== RESTART: C:/Cookpython/code05-test.py ====================
100보다 큼
끝
정수입력564
짝수
50보다 크고 100보다 적군요.

====================== RESTART: C:/Cookpython/code05-06.py =====================
50보다 크고 100보다 적군요.

====================== RESTART: C:\Cookpython\code05-05.py =====================
정수입력 : 45686
짝수

====================== RESTART: C:/Cookpython/code05-07.py =====================
점수를 입력하세요 : 79
C
학점입니다.

====================== RESTART: C:/Cookpython/code05-01.py =====================
거짓이므로 이 문장은 안 보이겠죠?
프로그램 끝

====================== RESTART: C:/Cookpython/code05-01.py =====================
거짓이므로 이 문장은 안 보이겠죠?
프로그램 끝

====================== RESTART: C:/Cookpython/code05-02.py =====================
끝

====================== RESTART: C:/Cookpython/code05-03.py =====================
100보다 크군요.

====================== RESTART: C:/Cookpython/code05-04.py =====================
100보다 크군요.
거짓이면 이 문장도 보이겠죠?
끝

======================== RESTART: C:/Cookpython/s5-1.py ========================
점수를 입력하세요 : 85
B+
학점입니다. ^^

======================== RESTART: C:/Cookpython/s5-1.py ========================
점수를 입력하세요 : 91
A0
학점입니다. ^^

======================== RESTART: C:/Cookpython/s5-1.py ========================
점수를 입력하세요 : 90
A0
학점입니다. ^^

======================== RESTART: C:/Cookpython/s5-1.py ========================
점수를 입력하세요 : 60
D0
학점입니다. ^^

======================== RESTART: C:/Cookpython/s5-1.py ========================
점수를 입력하세요 : 49
F
학점입니다. ^^

====================== RESTART: C:\Cookpython\code05-05.py =====================
정수를 입력하세요 : 49
홀수를 입력했군요.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 90
A
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 79
C
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 70
C
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 69
D
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 60
D
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 59
F
학점입니다.

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 90
A
--------
A

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 89
B
--------
B

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 59
F
----------
F

= RESTART: C:/Users/이수아/AppData/Local/Programs/Python/Python310/code05-07(test).py
점수를 입력하세요 : 79
C
---------- 절취선 ----------
C

j=55

'합격' if j>=60 else '불합격'
'불합격'
r='합격' if j>=60 else '불합격'
r
'불합격'


for i in range(4, 10)
SyntaxError: expected ':'
for i in range(4, 10) :
    print(i)

4
5
6
7
8
9

====================== RESTART: C:/Cookpython/code05-09.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code05-09.py", line 30, in <module>
    turtle.circle(radius)
  File "<string>", line 8, in circle
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 1991, in circle
    self.speed(speed)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2175, in speed
    self.pen(speed=speed)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2460, in pen
    self._update()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2661, in _update
    self._update_data()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2647, in _update_data
    self.screen._incrementudc()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 1293, in _incrementudc
    raise Terminator
turtle.Terminator


fruite=['사과', '배', '딸기', '포도']

fruit=['사과', '배', '딸기', '포도']

fruit
['사과', '배', '딸기', '포도']
fruit[0]
'사과'
fruit[5]
Traceback (most recent call last):
  File "<pyshell#32>", line 1, in <module>
    fruit[5]
IndexError: list index out of range
fruit.append('바나나')
fruit
['사과', '배', '딸기', '포도', '바나나']

if '포도' in fruit :
    print("있다")
else :
    print("없다")

있다


a="123+456"

s=eval(a)
s
579

eval("123+456)
     
SyntaxError: unterminated string literal (detected at line 1)
eval("123+456")
     
579

====================== RESTART: C:/Cookpython/code05-11.py =====================
1.입력한 수식 계산 2. 두 수 사이의 합계 : 1
*** 수식을 입력하세요 : 49-6*26
 49-6*26 결과는 -107.0입니다. 

====================== RESTART: C:/Cookpython/code05-11.py =====================
1.입력한 수식 계산 2. 두 수 사이의 합계 : 2
*** 첫 번째 숫자를 입력하세요 : 94
*** 두 번째 숫자를 입력하세요 : 84
94+...+84는 0입니다. 

====================== RESTART: C:/Cookpython/code05-11.py =====================
1.입력한 수식 계산 2. 두 수 사이의 합계 : 5
1 또는 2만 입력해야 합니다.

====================== RESTART: C:/Cookpython/code05-11.py =====================
1.입력한 수식 계산 2. 두 수 사이의 합계 : 2
*** 첫 번째 숫자를 입력하세요 : 1
*** 두 번째 숫자를 입력하세요 : 10
1+...+10는 55입니다. 
