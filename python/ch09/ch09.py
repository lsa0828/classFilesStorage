Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.

====================== RESTART: C:/Cookpython/code09-01.py =====================
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)3

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 블랙커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.

====================== RESTART: C:/Cookpython/code09-02.py =====================
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)2

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 설탕커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.

====================== RESTART: C:/Cookpython/code09-02.py =====================
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)2

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 설탕커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)1

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 보통커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)3

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 블랙커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)
====================== RESTART: C:/Cookpython/code09-02.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code09-02.py", line 21, in <module>
    if __main__=="__name__":
NameError: name '__main__' is not defined. Did you mean: '__name__'?

====================== RESTART: C:/Cookpython/code09-02.py =====================
어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)6

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 아무거나 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

손님~ 커피 여기 있습니다.

====================== RESTART: C:/Cookpython/code09-03.py =====================
A손님, 어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)2

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 설탕커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

A손님~ 커피 여기 있습니다.
B손님, 어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)1

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 보통커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

B손님~ 커피 여기 있습니다.
C손님, 어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)3

#1.뜨거운 물을 준비한다.
#2. 종이컵을 준비한다.
#3. 블랙커피를 탄다.
#4. 물을 붓는다.
#5. 스푼으로 젓는다.

C손님~ 커피 여기 있습니다.

====================== RESTART: C:/Cookpython/code09-04.py =====================
100과 200의 plus() 함수 결과는 300
dep hap(v1,v2,v3):
    
SyntaxError: invalid syntax
def hap(v1,v2,v3)"
SyntaxError: unterminated string literal (detected at line 1)
def hap(v1,v2,v3):
    result=0
    result=v1+v2+v3
    return result

r=0
r=hap(10,20,30)
r
60
r=hap(10,20)
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    r=hap(10,20)
TypeError: hap() missing 1 required positional argument: 'v3'
hap(10,20,30,40)
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    hap(10,20,30,40)
TypeError: hap() takes 3 positional arguments but 4 were given

====================== RESTART: C:/Cookpython/code09-05.py =====================
계산을 입력하세요(+, -, *, /) : /
첫 번째 수를 입력하세요 : 6
두 번째 수를 입력하세요 : 3
## 계산기 : 6 / 3 = 2

====================== RESTART: C:/Cookpython/code09-05.py =====================
계산을 입력하세요(+, -, *, /) : -
첫 번째 수를 입력하세요 : 19
두 번째 수를 입력하세요 : 24
## 계산기 : 19 - 24 = -5
r
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    r
NameError: name 'r' is not defined

def hap(v1,v2,v3):
    result=0
    result=v1+v2+v3
    return result

result
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    result
NameError: name 'result' is not defined


====================== RESTART: C:/Cookpython/code09-06.py =====================
f1 a= 10
f2 a= 20

====================== RESTART: C:/Cookpython/code09-09.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code09-09.py", line 12, in <module>
    myList=multi(100,200)
  File "C:/Cookpython/code09-09.py", line 7, in multi
    return restList
NameError: name 'restList' is not defined. Did you mean: 'retList'?

====================== RESTART: C:/Cookpython/code09-09.py =====================
multi()에서 돌려준 값 ==> 300, -100

====================== RESTART: C:/Cookpython/code09-11.py =====================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 3개인 함수를 호출한 결과 ==> 60

====================== RESTART: C:/Cookpython/code09-11.py =====================
10 20 0
매개변수가 2개인 함수를 호출한 결과 ==> 30
10 20 30
매개변수가 3개인 함수를 호출한 결과 ==> 60

====================== RESTART: C:/Cookpython/code09-12.py =====================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 3개인 함수를 호출한 결과 ==> 60

======================== RESTART: C:/Cookpython/s9-1.py ========================
Traceback (most recent call last):
  File "C:/Cookpython/s9-1.py", line 26, in <module>
    coffee=int(input("%s씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)", name))
TypeError: input expected at most 1 argument, got 2

======================== RESTART: C:/Cookpython/s9-1.py ========================
로제씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)4

#1.(자동으로) 뜨거운 물을 준비한다.
#2. (자동으로) 종이컵을 준비한다.
#3. (자동으로) 에스프레소를 탄다.
#4. (자동으로) 물을 붓는다.
#5. (자동으로) 스푼으로 젓는다.

%s씨~ 커피 여기 있습니다. 로제
리사씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)
Traceback (most recent call last):
  File "C:/Cookpython/s9-1.py", line 26, in <module>
    coffee=int(input(name+"씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)"))
ValueError: invalid literal for int() with base 10: ''

======================== RESTART: C:/Cookpython/s9-1.py ========================
로제씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)4

#1.(자동으로) 뜨거운 물을 준비한다.
#2. (자동으로) 종이컵을 준비한다.
#3. (자동으로) 에스프레소를 탄다.
#4. (자동으로) 물을 붓는다.
#5. (자동으로) 스푼으로 젓는다.

로제씨~ 커피 여기 있습니다.
리사씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)3

#1.(자동으로) 뜨거운 물을 준비한다.
#2. (자동으로) 종이컵을 준비한다.
#3. (자동으로) 카푸치노를 탄다.
#4. (자동으로) 물을 붓는다.
#5. (자동으로) 스푼으로 젓는다.

리사씨~ 커피 여기 있습니다.
지수씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)2

#1.(자동으로) 뜨거운 물을 준비한다.
#2. (자동으로) 종이컵을 준비한다.
#3. (자동으로) 카페라떼를 탄다.
#4. (자동으로) 물을 붓는다.
#5. (자동으로) 스푼으로 젓는다.

지수씨~ 커피 여기 있습니다.
제니씨, 어떤 거피 드릴까요?(1:아메리카노, 2:카페라떼, 3:카푸치노, 4:에스프레소)1

#1.(자동으로) 뜨거운 물을 준비한다.
#2. (자동으로) 종이컵을 준비한다.
#3. (자동으로) 아메리카노를 탄다.
#4. (자동으로) 물을 붓는다.
#5. (자동으로) 스푼으로 젓는다.

제니씨~ 커피 여기 있습니다.

======================== RESTART: C:/Cookpython/s9-2.py ========================
첫 번째 수를 입력하세요 : 2
계산을 입력하세요(+, -, *, /, **) : **
두 번째 수를 입력하세요 : 4
## 계산기 : 2 ** 4 = 16

======================== RESTART: C:/Cookpython/s9-2.py ========================
첫 번째 수를 입력하세요 : 8
계산을 입력하세요(+, -, *, /, **) : /
두 번째 수를 입력하세요 : 0
0으로는 나누면 안 됩니다.ㅠㅠ

====================== RESTART: C:/Cookpython/code09-07.py =====================
func1()에서 a값 10
func2()에서 a값 10

====================== RESTART: C:/Cookpython/code09-08.py =====================
func1()에서 돌려준 값 ==> 100
반환값이 없는 함수 실행

====================== RESTART: C:/Cookpython/code09-10.py =====================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 3개인 함수를 호출한 결과 ==> 60

======================== RESTART: C:/Cookpython/s9-3.py ========================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 10개인 함수를 호출한 결과 ==> 550

====================== RESTART: C:/Cookpython/code09-12.py =====================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 3개인 함수를 호출한 결과 ==> 60
매개변수가 10개인 함수를 호출한 결과 ==> 550
트와이스 --> 9명입니다.
소녀시대 --> 7명입니다.
걸스데이 --> 4명입니다.
블랙핑크 --> 4명입니다.

====================== RESTART: C:/Cookpython/code09-12.py =====================
매개변수가 2개인 함수를 호출한 결과 ==> 30
매개변수가 3개인 함수를 호출한 결과 ==> 60
매개변수가 10개인 함수를 호출한 결과 ==> 550

트와이스 --> 9명입니다.
소녀시대 --> 7명입니다.
걸스데이 --> 4명입니다.
블랙핑크 --> 4명입니다.

====================== RESTART: C:/Cookpython/code09-13.py =====================
** 로또 추첨을 시작합니다. ** 

추첨된 로또 번호 ==> 16 17 29 34 37 43 
import sys
print(sys.builtin_module_names)
('_abc', '_ast', '_bisect', '_blake2', '_codecs', '_codecs_cn', '_codecs_hk', '_codecs_iso2022', '_codecs_jp', '_codecs_kr', '_codecs_tw', '_collections', '_contextvars', '_csv', '_datetime', '_functools', '_heapq', '_imp', '_io', '_json', '_locale', '_lsprof', '_md5', '_multibytecodec', '_opcode', '_operator', '_pickle', '_random', '_sha1', '_sha256', '_sha3', '_sha512', '_signal', '_sre', '_stat', '_statistics', '_string', '_struct', '_symtable', '_thread', '_tracemalloc', '_warnings', '_weakref', '_winapi', '_xxsubinterpreters', 'array', 'atexit', 'audioop', 'binascii', 'builtins', 'cmath', 'errno', 'faulthandler', 'gc', 'itertools', 'marshal', 'math', 'mmap', 'msvcrt', 'nt', 'sys', 'time', 'winreg', 'xxsubtype', 'zlib')
dir(_builtins_)
Traceback (most recent call last):
  File "<pyshell#20>", line 1, in <module>
    dir(_builtins_)
NameError: name '_builtins_' is not defined. Did you mean: '__builtins__'?
dir(__builtins__)
['ArithmeticError', 'AssertionError', 'AttributeError', 'BaseException', 'BlockingIOError', 'BrokenPipeError', 'BufferError', 'BytesWarning', 'ChildProcessError', 'ConnectionAbortedError', 'ConnectionError', 'ConnectionRefusedError', 'ConnectionResetError', 'DeprecationWarning', 'EOFError', 'Ellipsis', 'EncodingWarning', 'EnvironmentError', 'Exception', 'False', 'FileExistsError', 'FileNotFoundError', 'FloatingPointError', 'FutureWarning', 'GeneratorExit', 'IOError', 'ImportError', 'ImportWarning', 'IndentationError', 'IndexError', 'InterruptedError', 'IsADirectoryError', 'KeyError', 'KeyboardInterrupt', 'LookupError', 'MemoryError', 'ModuleNotFoundError', 'NameError', 'None', 'NotADirectoryError', 'NotImplemented', 'NotImplementedError', 'OSError', 'OverflowError', 'PendingDeprecationWarning', 'PermissionError', 'ProcessLookupError', 'RecursionError', 'ReferenceError', 'ResourceWarning', 'RuntimeError', 'RuntimeWarning', 'StopAsyncIteration', 'StopIteration', 'SyntaxError', 'SyntaxWarning', 'SystemError', 'SystemExit', 'TabError', 'TimeoutError', 'True', 'TypeError', 'UnboundLocalError', 'UnicodeDecodeError', 'UnicodeEncodeError', 'UnicodeError', 'UnicodeTranslateError', 'UnicodeWarning', 'UserWarning', 'ValueError', 'Warning', 'WindowsError', 'ZeroDivisionError', '__build_class__', '__debug__', '__doc__', '__import__', '__loader__', '__name__', '__package__', '__spec__', 'abs', 'aiter', 'all', 'anext', 'any', 'ascii', 'bin', 'bool', 'breakpoint', 'bytearray', 'bytes', 'callable', 'chr', 'classmethod', 'compile', 'complex', 'copyright', 'credits', 'delattr', 'dict', 'dir', 'divmod', 'enumerate', 'eval', 'exec', 'exit', 'filter', 'float', 'format', 'frozenset', 'getattr', 'globals', 'hasattr', 'hash', 'help', 'hex', 'id', 'input', 'int', 'isinstance', 'issubclass', 'iter', 'len', 'license', 'list', 'locals', 'map', 'max', 'memoryview', 'min', 'next', 'object', 'oct', 'open', 'ord', 'pow', 'print', 'property', 'quit', 'range', 'repr', 'reversed', 'round', 'set', 'setattr', 'slice', 'sorted', 'staticmethod', 'str', 'sum', 'super', 'tuple', 'type', 'vars', 'zip']
import math
dir(math)
['__doc__', '__loader__', '__name__', '__package__', '__spec__', 'acos', 'acosh', 'asin', 'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'comb', 'copysign', 'cos', 'cosh', 'degrees', 'dist', 'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp', 'fsum', 'gamma', 'gcd', 'hypot', 'inf', 'isclose', 'isfinite', 'isinf', 'isnan', 'isqrt', 'lcm', 'ldexp', 'lgamma', 'log', 'log10', 'log1p', 'log2', 'modf', 'nan', 'nextafter', 'perm', 'pi', 'pow', 'prod', 'radians', 'remainder', 'sin', 'sinh', 'sqrt', 'tan', 'tanh', 'tau', 'trunc', 'ulp']

def outFunc(v1,v2):
    def inFunc(num1+num2):
        
SyntaxError: invalid syntax
def outFunc(v1,v2):
    def inFunc(num1,num2):
        return num1+num2
    return inFunc(v1,v2)
outFunc(10,20)
SyntaxError: invalid syntax
def outFunc(v1,v2):
    def inFunc(num1,num2):
        return num1+num2
    return inFunc(v1,v2)

outFunc(10,20)
30
inFunc(10,20)
Traceback (most recent call last):
  File "<pyshell#35>", line 1, in <module>
    inFunc(10,20)
NameError: name 'inFunc' is not defined

func=lambda n1,n2:n1+n2
func(10,20)
30

========================== RESTART: C:/Cookpython/A.py =========================
Module1.py의 func1()이 호출됨.
Module1.py의 func2()가 호출됨.
Module1.py의 func3()이 호출됨.

========================== RESTART: C:/Cookpython/B.py =========================
Module1.py의 func1()이 호출됨.
Module1.py의 func2()가 호출됨.
Module1.py의 func3()이 호출됨.

====================== RESTART: C:/Cookpython/code09-14.py =====================


====================== RESTART: C:/Cookpython/code09-14.py =====================

func=lambda n1=10,n2=20 : n1+n2
func()
30
func(20,30)
50

myList=[1,2,3,4,5]
def add10(n):
    return n+10

for i in range(len(myList)):
    myList[i]=add10(myList[i])

    
myList
[11, 12, 13, 14, 15]

myList=[1,2,3,4,5]
add10=lambda n :n+10
Exception ignored in: <function Image.__del__ at 0x0000028C8F65A950>
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 4046, in __del__
    self.tk.call('image', 'delete', self.name)
RuntimeError: main thread is not in main loop

d================================ RESTART: Shell ================================
myList=[1,2,3,4,5]
add10=lambda n : n+10
myList=list(map(add10,myList))
myList
[11, 12, 13, 14, 15]
list1=[1,2,3,4]
list2=[10,20,30,40]
hapList=list(map(lambda n1,n2 : n1+n2, list1, list2))
hapList
[11, 22, 33, 44]
def selfCall() :
    print("하", end='')
    selfCall()

selfCall()
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하d하하하하하하f하하하하하하하하하하as하하f하하하하하하하l하하f하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하
하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하d하하하하하f하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하하b하하하하하하하r하e하하a하하하k하하하하하하하
하하하Traceback (most recent call last):
  File "<pyshell#71>", line 1, in <module>
    selfCall()
  File "<pyshell#70>", line 3, in selfCall
    selfCall()
  File "<pyshell#70>", line 3, in selfCall
    selfCall()
  File "<pyshell#70>", line 3, in selfCall
    selfCall()
  [Previous line repeated 1009 more times]
  File "<pyshell#70>", line 2, in selfCall
    print("하", end='')
RecursionError: maximum recursion depth exceeded while pickling an object
def count(n) :
    if n>=1:
        print(n, end=' ')
        count(num-1)
    else:
        return

count(10)
10 Traceback (most recent call last):
  File "<pyshell#79>", line 1, in <module>
    count(10)
  File "<pyshell#78>", line 4, in count
    count(num-1)
NameError: name 'num' is not defined. Did you mean: 'sum'?
def count(n) :
    if n>=1:
        print(n, end=' ')
        count(n-1)
    else:
        return

    
count(10)
10 9 8 7 6 5 4 3 2 1 

def genFunc(n):
    for i in range(0, n):
        yield i
        print("제너레이터 진행 중")

for data in genFunc(5):
    print(data)

0
제너레이터 진행 중
1
제너레이터 진행 중
2
제너레이터 진행 중
3
제너레이터 진행 중
4
제너레이터 진행 중

def factorial(n) :
    if n<=1:
        return n
    else:return n*factorial(n-1)

    
factorial(4)
24
factorial(10)
3628800
factorial(1)
1
