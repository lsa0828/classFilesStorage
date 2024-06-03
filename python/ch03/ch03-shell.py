Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
print("100")
100
print(100)
100
print("%d" % 100)
100
print("%d" % (100+100))
200
print("%d" "(100,200))
      
SyntaxError: unterminated string literal (detected at line 1)
print("%d" %(100,200))

     
Traceback (most recent call last):
  File "<pyshell#5>", line 1, in <module>
    print("%d" %(100,200))
TypeError: not all arguments converted during string formatting
print("%d * %d = %d" % (a, b, a+b))
      
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    print("%d * %d = %d" % (a, b, a+b))
NameError: name 'a' is not defined
print("%d * %d = %d" % (10, 20, 30))
      
10 * 20 = 30
print(%s % 안녕하세요)
      
SyntaxError: invalid syntax
print("%s" % 안녕하세요)
      
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    print("%s" % 안녕하세요)
NameError: name '안녕하세요' is not defined
print("%s" % (안녕하세요))
      
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    print("%s" % (안녕하세요))
NameError: name '안녕하세요' is not defined


print("{0:d} *{1:5d} = {2:0.5d}".format(123,123,123))
      
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    print("{0:d} *{1:5d} = {2:0.5d}".format(123,123,123))
ValueError: Precision not allowed in integer format specifier
print("{0:d} *{1:5d} = {2:05d}".format(123,123,123))
      
123 *  123 = 00123
print("{2:d} *{1:5d} = {0:05d}".format(123,123,123))
      
123 *  123 = 00123
print("{2:d} *{1:5d} = {0:05d}".format(12,34,56))
      
56 *   34 = 00012

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * b'=' 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
print("%d" % *)
      
SyntaxError: invalid syntax
print("%c" % *)
      
SyntaxError: invalid syntax
print("%c" % "*")
      
*
print("%s" % "*********)
      
SyntaxError: unterminated string literal (detected at line 1)
print ("%s" % "*********")
      
*********
print ("%1s1" % "*******")
      
*******1
print ("%9s" % "*******")
      
  *******
for i in range (0,9)
      
SyntaxError: expected ':'

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****
Traceback (most recent call last):
  File "C:/Cookpython/s3-1.py", line 6, in <module>
    print("%s %s" % "안녕", "감사", "^^")
TypeError: not enough arguments for format string

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****
Traceback (most recent call last):
  File "C:/Cookpython/s3-1.py", line 6, in <module>
    print("%d %d" % (100, 200, 300))
TypeError: not all arguments converted during string formatting

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****
100 200 300
Traceback (most recent call last):
  File "C:/Cookpython/s3-1.py", line 7, in <module>
    print("%s %s %s" % "안녕", "감사", "^^")
TypeError: not enough arguments for format string

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****
100 200 300
Traceback (most recent call last):
  File "C:/Cookpython/s3-1.py", line 7, in <module>
    print("%s %s %s" % "안녕", "감사", "qkdl")
TypeError: not enough arguments for format string

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
  *******
    *****
100 200 300
안녕 감사 qkdl

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
 ******* 
  *****  
   ***   
    *    
100 200 300
안녕 감사 qkdl

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
 ******* 
  *****  
   ***   
    *    
   ***   
  *****  
 ******* 
*********
100 200 300
안녕 감사 qkdl

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
 ******* 
  *****  
   ***   
        *  
   ***   
  *****  
 ******* 
*********
100 200 300
안녕 감사 qkdl

======================== RESTART: C:/Cookpython/s3-1.py ========================
*
*
*
*
*
*
*
*
*
*********
 ******* 
  *****  
   ***   
    *    
   ***   
  *****  
 ******* 
*********
100 200 300
안녕 감사 qkdl

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
Traceback (most recent call last):
  File "C:/Cookpython/code03-연습.py", line 40, in <module>
    c=a+b
TypeError: can only concatenate tuple (not "str") to tuple

====================== RESTART: C:/Cookpython/code03-연습.py =====================
0xff
255
0o377
0b11111111
Traceback (most recent call last):
  File "C:/Cookpython/code03-연습.py", line 41, in <module>
    c=a+b
TypeError: can only concatenate tuple (not "str") to tuple

====================== RESTART: C:/Cookpython/code03-05.py =====================
__name__
메인 함수 부분이 실행됩니다.
Traceback (most recent call last):
  File "C:/Cookpython/code03-05.py", line 10, in <module>
    myfunc()
NameError: name 'myfunc' is not defined. Did you mean: 'myFunc'?

====================== RESTART: C:/Cookpython/code03-05.py =====================
__name__
메인 함수 부분이 실행됩니다.
함수를 호출함.
전역 변수 값: 100

====================== RESTART: C:/Cookpython/code03-05.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code03-05.py", line 6, in <module>
    print(__main__)
NameError: name '__main__' is not defined. Did you mean: '__name__'?

====================== RESTART: C:/Cookpython/code03-05.py =====================
__main__
메인 함수 부분이 실행됩니다.
함수를 호출함.
전역 변수 값: 100
sel=int("16)
        
SyntaxError: unterminated string literal (detected at line 1)
sel=int("16")
        
num="FF"
        
num10=int(num,16)
        
sel=int("16")
        
)
      
SyntaxError: unmatched ')'
sel=int("16")
      
num="9A"
      
num10=int(num, 16)
      
num10
      
154
print((hex(num10))

      )
      
0x9a
a=0o45
      
a
      
37
a=b
      
Traceback (most recent call last):
  File "<pyshell#41>", line 1, in <module>
    a=b
NameError: name 'b' is not defined
a=0
      
b=0
      
a=b
      
a==b
      
True

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
Traceback (most recent call last):
  File "C:/Cookpython/code03-연습.py", line 40, in <module>
    c=a+b
TypeError: can only concatenate tuple (not "str") to tuple

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
True
False
Traceback (most recent call last):
  File "C:/Cookpython/code03-연습.py", line 40, in <module>
    c=a+b
TypeError: can only concatenate tuple (not "str") to tuple

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
True
False
('안녕하"세요',)
Traceback (most recent call last):
  File "C:/Cookpython/code03-연습.py", line 40, in <module>
    c=a+b
TypeError: can only concatenate tuple (not "str") to tuple

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
True
False
안녕하"세요
안녕하"세요잘부탁

====================== RESTART: C:/Cookpython/code03-연습.py =====================
100 * 200 = 20000
100 * 200 = 20000.0
100 * 200 = 20000
100 * 200 = 20000
100 200 300
안녕 감사 qkdl
0xff
255
0o377
0b11111111
True
False
안녕하"세요
안녕하"세요잘부탁
잘부탁잘부탁

======================== RESTART: C:/Cookpython/s3-2.py ========================
입력 진수 결정(16/10/8/2) : 5
16, 10, 8, 2 숫자 중 하나만 입력하세요.
값 입력 : 46
Traceback (most recent call last):
  File "C:/Cookpython/s3-2.py", line 18, in <module>
    print("16진수 ==> ", hex(num10))
NameError: name 'num10' is not defined

======================== RESTART: C:/Cookpython/s3-2.py ========================
입력 진수 결정(16/10/8/2) : 16
값 입력 : 55
16진수 ==>  0x55
10진수 ==>  85
8진수 ==>  0o125
2진수 ==>  0b1010101

======================== RESTART: C:/Cookpython/s3-2.py ========================
입력 진수 결정(16/10/8/2) : 5
16, 10, 8, 2 숫자 중 하나만 입력하세요.
