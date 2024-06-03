Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
a=3
a=5+3
a
8

==================== RESTART: C:/Cookpython/ch04-codefile.py ===================
교환할 돈은 얼마?8

==================== RESTART: C:/Cookpython/ch04-codefile.py ===================
교환할 돈은 얼마? : 9
Traceback (most recent call last):
  File "C:/Cookpython/ch04-codefile.py", line 3, in <module>
    printf(mon-6)
NameError: name 'printf' is not defined. Did you mean: 'print'?

==================== RESTART: C:/Cookpython/ch04-codefile.py ===================
교환할 돈은 얼마? : 6
0
a=5;b=3;
a=5;b=6;b=a+b
b
11
s1,s2,s3="100", "100.123", "999999999999999999999"
s1+s2
'100100.123'
int(s1)
100
int(s2)
Traceback (most recent call last):
  File "<pyshell#9>", line 1, in <module>
    int(s2)
ValueError: invalid literal for int() with base 10: '100.123'
float(s2)
100.123
float(s1)
100.0
print(int(s1)+1,float(s2)+1,int(s3)+1)
101 101.123 1000000000000000000000
a=100;b=100.123
str(a)+str(b)
'100100.123'
str(a)
'100'
a
100
a+1
101
str(a)+'1'
'1001'
print(a)
100
print(str(a))
100
print(a)
100
a++
SyntaxError: invalid syntax
a
100
a+=1
a
101
a=10
a+=5
a
15
a-=4
a
11
50//13
3
270%=50
SyntaxError: 'literal' is an illegal expression for augmented assignment
a=270
a%=50
a
20

==================== RESTART: C:/Cookpython/ch04-codefile.py ===================
교환할 돈은 얼마?4800
500원짜리 ==> 959개
100원짜리 ==> -4747개
50원짜리 ==> 0개
10원짜리 ==> 0개
바꾸지 못한 잔돈==> 0원

==================== RESTART: C:/Cookpython/ch04-codefile.py ===================
교환할 돈은 얼마?7777
15 2 1 2 7
a
Traceback (most recent call last):
  File "<pyshell#36>", line 1, in <module>
    a
NameError: name 'a' is not defined
a=100;b=200;a==b
False
a!=v
Traceback (most recent call last):
  File "<pyshell#38>", line 1, in <module>
    a!=v
NameError: name 'v' is not defined
a!=b
True
a=5;b=3
a/b
1.6666666666666667
print(int(a/b))
1
a//b
1
a%b
2

====================== RESTART: C:\Cookpython\code04-01.py =====================
교환할 돈은 얼마?7777
500원짜리 ==> 15개
100원짜리 ==> 2개
50원짜리 ==> 1개
10원짜리 ==> 2개
바꾸지 못한 잔돈==> 7원
a=3;b=4
a**b
81
a,b,c=2,3,4
print(a+b-c,a+b*c,a*b/c)
1 14 1.5
s1,s3,s3='100','100.123','9999999999'
int(s1)+1
101
float(s2)
Traceback (most recent call last):
  File "<pyshell#51>", line 1, in <module>
    float(s2)
NameError: name 's2' is not defined. Did you mean: 's1'?
s3
'9999999999'
float(s3)
9999999999.0
intt(s3)+1
Traceback (most recent call last):
  File "<pyshell#54>", line 1, in <module>
    intt(s3)+1
NameError: name 'intt' is not defined. Did you mean: 'int'?
s1,s2,s3='100','100.11','999999999999'
float(s2)
100.11
int(s2)
Traceback (most recent call last):
  File "<pyshell#57>", line 1, in <module>
    int(s2)
ValueError: invalid literal for int() with base 10: '100.11'
s2='100.78'
float(s2)
100.78
int('s2')
Traceback (most recent call last):
  File "<pyshell#60>", line 1, in <module>
    int('s2')
ValueError: invalid literal for int() with base 10: 's2'
a=100;b=100.123
str(a)+'1';str(b)+'1'
'1001'
'100.1231'

a=10
a+=5;a
15
a-=5
a
10
a*=3;a
30
a/=6;a
5.0
a//=2;a
2.0
a*=7
a
14.0
a%=5;a
4.0
a**=5;a
1024.0
a,b=100,200
a==b
False
a!=b
True
a>b
False
a<b
True
a=100.78
a=int(a)
a
100

====================== RESTART: C:\Cookpython\code04-01.py =====================
교환할 돈은 얼마?48654

500원짜리 ==> 97개
100원짜리 ==> 1개
50원짜리 ==> 1개
10원짜리 ==> 0개
바꾸지 못한 잔돈==> 4원
a='****';b=' '
b+a+b
' **** '
\na\n
SyntaxError: unexpected character after line continuation character
\n a \n
SyntaxError: unexpected character after line continuation character
a
'****'
\ta\t
SyntaxError: unexpected character after line continuation character
\\a\\
SyntaxError: unexpected character after line continuation character
\
  \a
SyntaxError: unexpected character after line continuation character
a*9
'************************************'
a**3
Traceback (most recent call last):
  File "<pyshell#93>", line 1, in <module>
    a**3
TypeError: unsupported operand type(s) for ** or pow(): 'str' and 'int'
a*=3;a
'************'
a=123
print("hello %d" % a,a,a)
hello 123 123 123
print("hello %d,," % a,a,a)
hello 123,, 123 123
type(a)
<class 'int'>
print("hello %d nice" % a,a,a)
hello 123 nice 123 123
a=120
a>100
True
a>100 and a<200
True
a>100 and a>200
False
a>100 or a>200
True
not a==500
True
if(1234) : print("참")

참
if(0) : print("참")


====================== RESTART: C:/Cookpython/code04-02.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code04-02.py", line 12, in <module>
    turtle.setup(width=swidth+30, heiht=sheight30)
NameError: name 'sheight30' is not defined. Did you mean: 'sheight'?

====================== RESTART: C:/Cookpython/code04-02.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code04-02.py", line 12, in <module>
    turtle.setup(width=swidth+30, heiht=sheight+30)
TypeError: setup() got an unexpected keyword argument 'heiht'

====================== RESTART: C:/Cookpython/code04-02.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code04-02.py", line 23, in <module>
    turtle.left(angle)
  File "<string>", line 8, in left
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 1700, in left
    self._rotate(angle)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 3278, in _rotate
    self._update()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2661, in _update
    self._update_data()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 2647, in _update_data
    self.screen._incrementudc()
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\turtle.py", line 1293, in _incrementudc
    raise Terminator
turtle.Terminator

====================== RESTART: C:/Cookpython/code04-02.py =====================

a=10
bin(a)
'0b1010'
a<<2
40
bin(a)
'0b1010'
a=a<<2
bin(a)
'0b101000'
a=20
a<<2
80
a<<3
160
a<<4
320
a<<1
40
10&7
2
bin(10)
'0b1010'
bin(7)
'0b111'
10|7
15
10&0
0
10|0
10
0xFF&0x00
0
0o46&0o12
2
0xAA&8
8
hex(AA)
Traceback (most recent call last):
  File "<pyshell#131>", line 1, in <module>
    hex(AA)
NameError: name 'AA' is not defined
hex(22)
'0x16'
hex(f)
Traceback (most recent call last):
  File "<pyshell#133>", line 1, in <module>
    hex(f)
NameError: name 'f' is not defined
hex('f')
Traceback (most recent call last):
  File "<pyshell#134>", line 1, in <module>
    hex('f')
TypeError: 'str' object cannot be interpreted as an integer
hex(F)
Traceback (most recent call last):
  File "<pyshell#135>", line 1, in <module>
    hex(F)
NameError: name 'F' is not defined
hex('F')
Traceback (most recent call last):
  File "<pyshell#136>", line 1, in <module>
    hex('F')
TypeError: 'str' object cannot be interpreted as an integer
int('FF', 16)
255
hex(59)
'0x3b'
10^7
13
a=ord('A')
mask=0x0F
print("%x & %x = %x" % (a, mask, a &mask))
41 & f = 1
a=123456
~a+1
-123456
a=5
a>>1;a>>2;a>>3;a>>4
2
1
0
0
