Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.

====================== RESTART: C:/Cookpython/code12-01.py =====================

====================== RESTART: C:/Cookpython/code12-01.py =====================

====================== RESTART: C:/Cookpython/code12-02.py =====================
자동차1의 색상은 빨강이며, 현재 속도는 30km입니다.
자동차2의 색상은 파랑이며, 현재 속도는 60km입니다.
자동차3의 색상은 노랑이며, 현재 속도는 0km입니다.

====================== RESTART: C:/Cookpython/code12-04.py =====================
자동차1의 색상은 red이며, 현재 속도는 30km입니다.
자동차2의 색상은 blue이며, 현재 속도는 60km입니다.

====================== RESTART: C:/Cookpython/code12-05.py =====================

====================== RESTART: C:/Cookpython/code12-05.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code12-05.py", line 20, in <module>
    print("%s의 현재 속도는 %dkm입니다." %(myCar1.getName(), myCar1.getSpeed()))
NameError: name 'myCar1' is not defined

====================== RESTART: C:/Cookpython/code12-05.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code12-05.py", line 20, in <module>
    print("%s의 현재 속도는 %d입니다." %(myCar1.getName(), myCar1.getSpeed()))
NameError: name 'myCar1' is not defined

====================== RESTART: C:/Cookpython/code12-05.py =====================
아우디의 현재 속도는 0입니다.
벤츠의 현재 속도는 30입니다.

====================== RESTART: C:/Cookpython/code12-06.py =====================
자동차1의 현재 속도는 30km, 생산된 자동차는 총 1대입니다.
자동차2의 현재 속도는 60km, 생산된 자동차는 총 2대입니다.

====================== RESTART: C:/Cookpython/code12-07.py =====================
트럭 --> 현재속도(슈퍼 클래스):200
승용차 --> 현재 속도(서브 클래스):150

======================== RESTART: C:/Cookpython/s12-1.py =======================
자동차1의 색상은 빨강이며, 현재 속도는 30km입니다.
자동차2의 색상은 파랑이며, 현재 속도는 150km입니다.
자동차3의 색상은 노랑이며, 현재 속도는 150km입니다.

======================== RESTART: C:/Cookpython/s12-1.py =======================
자동차1의 색상은 빨강이며, 현재 속도는 30km입니다.
자동차2의 색상은 파랑이며, 현재 속도는 140km입니다.
자동차3의 색상은 노랑이며, 현재 속도는 150km입니다.

====================== RESTART: C:/Cookpython/code12-03.py =====================
자동차1의 색상은 빨강이며, 현재 속도는 0km입니다.
자동차2의 색상은 빨강이며, 현재 속도는 0km입니다.

======================== RESTART: C:/Cookpython/s12-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s12-2.py", line 17, in <module>
    class Sonata(Car):
  File "C:/Cookpython/s12-2.py", line 18, in Sonata
    print("현재 속도(서브 클래스):%d" %self.speed)
NameError: name 'self' is not defined

======================== RESTART: C:/Cookpython/s12-2.py =======================
트럭 --> 현재속도(슈퍼 클래스):200
승용차 --> 현재 속도(서브 클래스):150
소나타 --> 현재 속도(서브 클래스):150

====================== RESTART: C:/Cookpython/code13-01.py =====================
사용자ID ==> su
사용자이름 ==> Su Ji
이메일 ==> suji@naver.com
출생연도 ==> 
Traceback (most recent call last):
  File "C:/Cookpython/code13-01.py", line 18, in <module>
    cur.execute(sql)
sqlite3.OperationalError: near ")": syntax error

====================== RESTART: C:/Cookpython/code13-01.py =====================
사용자ID ==> su
사용자이름 ==> Su Ah
이메일 ==> suah@naver.com
출생연도 ==> 2002
사용자ID ==> 

======================== RESTART: C:/Cookpython/s13-2.py =======================
제품코드 ==> 


====================== RESTART: C:/Cookpython/code13-02.py =====================
사용자ID        사용자이름        이메일           출생년도
-----------------------------------------------
 john        John Bann   john@naver.com  1990
  kim          Kim Chi     kim@daum.net  1992
  lee          Lee Pal   leem@paran.com  1988
 park          Park Su   park@gamil.com  1980
   su            Su Ah   suah@naver.com  2002

====================== RESTART: C:/Cookpython/code13-02.py =====================
사용자ID      사용자이름        이메일       출생년도
-----------------------------------------------
 john        John Bann   john@naver.com  1990
  kim          Kim Chi     kim@daum.net  1992
  lee          Lee Pal   leem@paran.com  1988
 park          Park Su   park@gamil.com  1980
   su            Su Ah   suah@naver.com  2002

====================== RESTART: C:/Cookpython/code13-02.py =====================
사용자ID     사용자이름     이메일      출생년도
-----------------------------------------------
 john        John Bann   john@naver.com  1990
  kim          Kim Chi     kim@daum.net  1992
  lee          Lee Pal   leem@paran.com  1988
 park          Park Su   park@gamil.com  1980
   su            Su Ah   suah@naver.com  2002

======================== RESTART: C:/Cookpython/s13-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s13-2.py", line 10, in <module>
    cur.execute("create table productTable (pCode char(5), pName char(10), price int, amount int")
sqlite3.OperationalError: incomplete input

======================== RESTART: C:/Cookpython/s13-2.py =======================
제품코드 ==> p0001
제품명 ==> 노트북
가격 ==> 110
재고수량 ==> 5
제품코드 ==> p0002
제품명 ==> 마우스
가격 ==> 3
재고수량 ==> 22
제품코드 ==> p0003
제품명 ==> 키보드
가격 ==> 2
재고수량 ==> 11
제품코드 ==> 

======================== RESTART: C:/Cookpython/s13-3.py =======================
제품코드   제품명    가격    재고수량
--------------------------------------

======================== RESTART: C:/Cookpython/s13-3.py =======================
제품코드   제품명    가격    재고수량
--------------------------------------

====================== RESTART: C:/Cookpython/code13-02.py =====================
사용자ID     사용자이름     이메일      출생년도
-----------------------------------------------
 john        John Bann   john@naver.com  1990
  kim          Kim Chi     kim@daum.net  1992
  lee          Lee Pal   leem@paran.com  1988
 park          Park Su   park@gamil.com  1980
   su            Su Ah   suah@naver.com  2002
p0001              노트북              110  5
p0002              마우스                3  22
p0003              키보드                2  11

======================== RESTART: C:/Cookpython/s13-3.py =======================
제품코드   제품명    가격    재고수량
--------------------------------------
p0001    노트북  110  5
p0002    마우스  3  22
p0003    키보드  2  11

======================== RESTART: C:/Cookpython/s13-3.py =======================
제품코드 제품명 가격 재고수량
---------------------------
p0001    노트북  110  5
p0002    마우스  3  22
p0003    키보드  2  11
