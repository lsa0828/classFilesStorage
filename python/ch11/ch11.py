Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.

====================== RESTART: C:/Cookpython/code11-01.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code11-01.py", line 6, in <module>
    inStr=inFp.readline()
UnicodeDecodeError: 'cp949' codec can't decode byte 0xed in position 0: illegal multibyte sequence

====================== RESTART: C:/Cookpython/code11-01.py =====================
파이썬을 공부합시다.
완전 재미있어요.
공부하기 잘했네요~

====================== RESTART: C:/Cookpython/code11-02.py =====================
파이썬을 공부합시다.
완전 재미있어요.
공부하기 잘했네요~

======================== RESTART: C:/Cookpython/s11-1.py =======================
%d: %s (1, '파이썬을 공부합시다.\n')%d: %s (2, '완전 재미있어요.\n')%d: %s (3, '공부하기 잘했네요~')

======================== RESTART: C:/Cookpython/s11-1.py =======================
1: 파이썬을 공부합시다.
2: 완전 재미있어요.
3: 공부하기 잘했네요~

====================== RESTART: C:/Cookpython/code11-03.py =====================
['파이썬을 공부합시다.\n', '완전 재미있어요.\n', '공부하기 잘했네요~']

====================== RESTART: C:/Cookpython/code11-04.py =====================
파이썬을 공부합시다.
완전 재미있어요.
공부하기 잘했네요~

======================== RESTART: C:/Cookpython/s11-2.py =======================
1: 파이썬을 공부합시다.
2: 완전 재미있어요.
3: 공부하기 잘했네요~

====================== RESTART: C:/Cookpython/code11-05.py =====================
파일명을 입력하세요 : C:/Windows/win.ini
; for 16-bit app support
[fonts]
[extensions]
[mci extensions]
[files]
[Mail]
MAPI=1
[ResponseResult]
ResultCode=0

====================== RESTART: C:/Cookpython/code11-05.py =====================
파일명을 입력하세요 : C:/abc.txt
Traceback (most recent call last):
  File "C:/Cookpython/code11-05.py", line 5, in <module>
    inFp=open(fName, "r")
FileNotFoundError: [Errno 2] No such file or directory: 'C:/abc.txt'

====================== RESTART: C:/Cookpython/code11-06.py =====================
파일명을 입력하세요: C:/abc.txt
C:/abc.txt 파일이 없습니다.

====================== RESTART: C:/Cookpython/code11-07.py =====================
내용 입력: 파이썬을
내용 입력: 열공하고
내용 입력: 있습니다.
내용 입력: 
---정상적으로 파일에 씀---

======================== RESTART: C:/Cookpython/s11-3.py =======================
파일명을 입력하세요: C:/Temp/data2.1.txt
내용 입력: 파이썬을
내용 입력: 공부하고
내용 입력: 있습니다.
내용 입력: 
---정상적으로 파일에 씀---

====================== RESTART: C:/Cookpython/code11-08.py =====================
---파일이 정상적으로 복사되었음---

======================== RESTART: C:/Cookpython/s11-4.py =======================
소스 파일명을 입력하세요: C:/Windows/win.ini
타깃 파일명을 입력하세요: C:/Temp/data4.txt
---파일이 정상적으로 복사되었음---

====================== RESTART: C:/Cookpython/code11-09.py =====================
1. 암호화 2. 암호 해석 중 선택 : 1
입력 파일명을 입력하세요 : normal.txt
출력 파일명을 입력하세요 : security.txt
Traceback (most recent call last):
  File "C:/Cookpython/code11-09.py", line 15, in <module>
    inFp=open(inFname, 'r', encoding='utf-8')
FileNotFoundError: [Errno 2] No such file or directory: 'normal.txt'

====================== RESTART: C:/Cookpython/code11-09.py =====================
1. 암호화 2. 암호 해석 중 선택 : 1
입력 파일명을 입력하세요 : normal.txt
출력 파일명을 입력하세요 : security.txt
normal.txt --> security.txt 변환 완료

====================== RESTART: C:/Cookpython/code11-09.py =====================
1. 암호화 2. 암호 해석 중 선택 : 2
입력 파일명을 입력하세요 : security.txt
출력 파일명을 입력하세요 : recovery.txt
security.txt --> recovery.txt 변환 완료
ord('수')
49688
chr(49688)
'수'
chr(49688-100)
'솴'
chr(49688+100)
'쉼'
ord('수아')
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    ord('수아')
TypeError: ord() expected a character, but string of length 2 found
chr(46846)
'뛾'

====================== RESTART: C:/Cookpython/code11-10.py =====================
---이진 파일이 정상적으로 복사되었음---

====================== RESTART: C:/Cookpython/code11-11.py =====================

====================== RESTART: C:/Cookpython/code11-11.py =====================

====================== RESTART: C:/Cookpython/code11-11.py =====================

====================== RESTART: C:/Cookpython/code11-11.py =====================
import os
os.remove("C:/Temp/noFile.exe")
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    os.remove("C:/Temp/noFile.exe")
FileNotFoundError: [WinError 2] 지정된 파일을 찾을 수 없습니다: 'C:/Temp/noFile.exe'
try:
    os.remove("C:/Temp/noFile.exe")
except:
    print("파일이 없다.")

파일이 없다.
