Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
aa=[10,20,30,40,50]
aa[0]
10
aa[1:3]
[20, 30]
ss='파이썬최고'
type(ss)
<class 'str'>
ss[0]
'파'
ss[1:3]
'이썬'
ss='파이썬'+'최고'
ss
'파이썬최고'
ss='파이썬'*3
ss
'파이썬파이썬파이썬'
ss='파이썬 '*3
ss
'파이썬 파이썬 파이썬 '
len(ss)
12
ss='123한글abc'
len(ss)
8
ss[1]
'2'
ss='파이썬짱!'
sslen=len(ss)
for i in range(sslen) :
    print(ss[i]+$)
    
SyntaxError: invalid syntax
for i in range(sslen) :
    print(ss[i]+'$')

파$
이$
썬$
짱$
!$
for i in range(sslen) :
    print(ss[i]+'%', end='')

파%이%썬%짱%!%


====================== RESTART: C:/Cookpython/code08-02.py =====================
문자열을 입력하세요.안녕하세요~!
!~요세하녕안

ss='Python is Easy. 그래서 programming이 재밌습니다.^^
SyntaxError: unterminated string literal (detected at line 1)
ss='Python is Easy. 그래서 programming이 재밌습니다.^^'
ss.upper()
'PYTHON IS EASY. 그래서 PROGRAMMING이 재밌습니다.^^'
aa=ss.upper()
aa
'PYTHON IS EASY. 그래서 PROGRAMMING이 재밌습니다.^^'
ss
'Python is Easy. 그래서 programming이 재밌습니다.^^'
ss.lower()
'python is easy. 그래서 programming이 재밌습니다.^^'
ss.swapcase()
'pYTHON IS eASY. 그래서 PROGRAMMING이 재밌습니다.^^'
ss.title()
'Python Is Easy. 그래서 Programming이 재밌습니다.^^'

ss.count('p')
1
ss.count('P')
1
ss.count('o')
2
ss.find('y')
1
ss.startswith('Py')
True
ss.startswith('py')
False
ss.endswith('^^')
True
ss.count('z')
0
ss.find('z')
-1


====================== RESTART: C:/Cookpython/code08-03.py =====================
입력문자열 ==> 안녕하세요)
출력문자열 ==> (안녕하세요)

====================== RESTART: C:/Cookpython/code08-03.py =====================
입력문자열 ==> 파이썬파이썬
출력문자열 ==> (파이썬파이썬)

ss='안녕하세요'
if ss==' 안녕하세요' :
    print("같아요')
          
SyntaxError: unterminated string literal (detected at line 2)
if ss==' 안녕하세요') :
        
SyntaxError: unmatched ')'
if ss=' 안녕하세요' :
    
SyntaxError: invalid syntax. Maybe you meant '==' or ':=' instead of '='?
if ss==' 안녕하세요' :
    print("같아요")

if ss=='안녕하세요 ':
    print("같아요")


if ss=='안녕하세요 ':
    "같아요"


====================== RESTART: C:/Cookpython/code08-03.py =====================
입력:안녕하세요

====================== RESTART: C:/Cookpython/code08-03.py =====================
입력: 안녕하세요
2같아요

ss='열심히 파이썬 공부 중!'
ss.replace('공부','study')
'열심히 파이썬 study 중!'


====================== RESTART: C:/Cookpython/code08-06.py =====================
날짜(연/월/일) 입력==>2022/5/9
입력한 날짜의 10년후-->Traceback (most recent call last):
  File "C:/Cookpython/code08-06.py", line 6, in <module>
    print(str(int(ssList[0]+10)+'년', end=''))
TypeError: can only concatenate str (not "int") to str

====================== RESTART: C:/Cookpython/code08-06.py =====================
날짜(연/월/일) 입력==>2022/5/9
입력한 날짜의 10년후-->Traceback (most recent call last):
  File "C:/Cookpython/code08-06.py", line 6, in <module>
    print(str(int(ssList[0]+10)+'년', end=''))
TypeError: can only concatenate str (not "int") to str

====================== RESTART: C:/Cookpython/code08-06.py =====================
날짜(연/월/일) 입력==>2022/5/9
입력한 날짜의 10년후-->Traceback (most recent call last):
  File "C:/Cookpython/code08-06.py", line 6, in <module>
    print(str(int(ssList[0]+10))+'년', end='')
TypeError: can only concatenate str (not "int") to str

====================== RESTART: C:/Cookpython/code08-06.py =====================
날짜(연/월/일) 입력==>2022/5/9
입력한 날짜의 10년후-->Traceback (most recent call last):
  File "C:/Cookpython/code08-06.py", line 6, in <module>
    print(str(int(ssList[0]+10)+'년', end=''))
TypeError: can only concatenate str (not "int") to str

====================== RESTART: C:/Cookpython/code08-06.py =====================
날짜(연/월/일) 입력==>2022/5/9
입력한 날짜의 10년후-->2032년5월9일


ssList
['2022', '5', '9']
aaList=list(map(int,ssList))
aaList
[2022, 5, 9]
ssList
['2022', '5', '9']

ch='안녕하세요'

for i in ch:
    print(i)

안
녕
하
세
요
for i in range(len(ch)):
    print(ch[i])

안
녕
하
세
요

====================== RESTART: C:/Cookpython/code08-07.py =====================

Warning (from warnings module):
  File "C:/Cookpython/code08-07.py", line 18
    tX=random.randrange(-swidth/2, swidth/2)
DeprecationWarning: non-integer arguments to randrange() have been deprecated since Python 3.10 and will be removed in a subsequent version

Warning (from warnings module):
  File "C:/Cookpython/code08-07.py", line 19
    tY=random.randrange(-sheight/2, sheight/2)
DeprecationWarning: non-integer arguments to randrange() have been deprecated since Python 3.10 and will be removed in a subsequent version


====================== RESTART: C:/Cookpython/code08-01.py =====================
파$이$썬$짱$!$

======================== RESTART: C:/Cookpython/s8-1.py ========================
파
#
썬
#
완
#
재
#
있
#
요

======================== RESTART: C:/Cookpython/s8-1.py ========================
파#썬#완#재#있#요
ss='파이썬 공부는 재밌다. 모든 공부가 다 재밌지는 않다.'
ss.find('공부')
4
ss.find('재밌다')
8
ss.rfind('공부')
16
ss.rfind('재밌다')
8
ss
'파이썬 공부는 재밌다. 모든 공부가 다 재밌지는 않다.'
ss.find('공부', 5)
16
ss.index('공부')
4
ss.rindex('공부')
16
ss.index('공부',5)
16

ss=' 파 이 썬 '
ss.strip()
'파 이 썬'
ss.rstrip()
' 파 이 썬'
ss.lstrip()
'파 이 썬 '

ss='파이썬 공부는 재밌다. 모든 공부가 다 재밌지는 않다.'
ss.find('공부', 4)
4

ss='---파---이---썬---'
ss.strip('-')
'파---이---썬'

====================== RESTART: C:/Cookpython/code08-04.py =====================
원래 문자열 ==> [  한글 Python 프로그래밍  ]
공백 삭제 문자열 ==> [한글Python프로그래밍]


====================== RESTART: C:/Cookpython/code08-05.py =====================
입력 문자열 ==> IT CookBook for Python
출력 문자열 ==> IT C$$kB$$k f$r Pyth$n

ss='Python을 열심히 공부 중'
ss.replace('Python', '파이썬')
'파이썬을 열심히 공부 중'
ㄴㄴ
Traceback (most recent call last):
  File "<pyshell#110>", line 1, in <module>
    ㄴㄴ
NameError: name 'ᄂᄂ' is not defined
ss
'Python을 열심히 공부 중'
ss.split()
['Python을', '열심히', '공부', '중']
ss.split(':')
['Python을 열심히 공부 중']
ss='gksk\nenf\ntpt'
ss.splitlines()
['gksk', 'enf', 'tpt']
ss.split(\n)
SyntaxError: unexpected character after line continuation character
ss.split('\n')
['gksk', 'enf', 'tpt']
ss='%'
ss.join('파이썬')
'파%이%썬'

ss='파이썬'
ss.center(10)
'   파이썬    '
ss.center(10, '-')
'---파이썬----'
ss.ljust(10)
'파이썬       '
ss.zfill(10)
'0000000파이썬'
'1234'.isdigit()
True
'abc123'.isalnum()
True
'한글'.isalpha()
True

======================== RESTART: C:/Cookpython/s8-2.py ========================
원래 문자열 ==> [<<<파<<이>>썬>>>]
<> 삭제 문자열 ==> [파이썬]

'1234한글'.isdigit()
False

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : abc123
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : abc213알
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : 213546
숫자입니다.
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : abc123
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : adfadkㅇㄴ라ㅣ
글자입니다.
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : bcadfdㅇㅁㄹ
글자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : 12356
숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : ㅣㅏㄷ90
글자+숫자입니다.

======================== RESTART: C:/Cookpython/s8-3.py ========================
문자열 입력 : 213+465
모르겠습니다.

ss='python'
ss[1] + ' ' + ss[3]
'y h'
print(ss[0], ss[2])
p t
ss='24가 2210'
for i in range(len(ss)-3, len(ss)) :
    print(ss[i], end='')

210
for i in range(len(ss)-4, len(ss)) :
    print(ss[i], end='')

2210
print(ss[-4:])
2210
ss='홀짝홀짝홀짝'
ss[::2]
'홀홀홀'
ss='PYTHON'
ss[-1:-len(ss)]
''
ss[len(ss):0]
''
ss[::-1]
'NOHTYP'
ss='010-1111-2222'
ss.replace('-', ' ')
'010 1111 2222'
aa=ss.replace('-','')
aa
'01011112222'
print(aa)
01011112222
url='http://sharebook.kr'
aa=url.split('.')
aa
['http://sharebook', 'kr']
aa[-1]
'kr'
ss='abcdefe2a354a32a'
ss.upper('a')
Traceback (most recent call last):
  File "<pyshell#158>", line 1, in <module>
    ss.upper('a')
TypeError: str.upper() takes no arguments (1 given)
ss.replace('a', 'A')
'Abcdefe2A354A32A'

print('-'*80)
--------------------------------------------------------------------------------
t1='python'
t2='java'
t1+t2+t1+t2
'pythonjavapythonjava'
name1='김민수'
age1=10
name2='이철희'
age2=13
print('이름: %s 나이: %d" % (name1, age1))
      
SyntaxError: unterminated string literal (detected at line 1)
print('이름: %s 나이: %d' % (name1, age1))
      
이름: 김민수 나이: 10
print('이름: {} 나이: {}'.format(name2,age2))
      
이름: 이철희 나이: 13
ss='5,969,782,550'
      
aa=int(ss.replace(',',''))
      
aa
      
5969782550
aa+1
      
5969782551
ss='2020/03(E) (IFRS연결)'
      
ss[:7]
      
'2020/03'
ss='    삼성전자    '
      
ss.replace(' ', '')
      
'삼성전자'
ss.strip()
      
'삼성전자'
