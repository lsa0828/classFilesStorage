'''
#연습문제 7
str1 = "코딩 중에서 파이썬 코딩이 가장 즐거운 코딩" # 총 24글자

(1) str1.count('코딩')  --> 3
(2) str1.rfind('코딩')  --> 22
(3) str1.startswith('코딩')  --> True
(4) str1.find('파이썬')  --> 7


#연습문제 10
ss="IT_CookBook"

--
.split() -> 문자열 나눌 때
    ss="파이썬 프로그래밍"
    ss.split() -> ['파이썬', '프로그래밍']
.join() -> 문자열 합칠 때
    ss=['파이썬', '프로그래밍']
    " ".join(ss) -> "파이썬 프로그래밍"
--

'#'.join(ss)  --> I#T_#C#o#o#k#B#o#o#k
ss.join('#')  --> #
ss.split('#')  --> 사용X
'#'.split(ss)  --> 사용X


#연습문제 11
ss=input("문자열 --> ")
print("한글/영문자만 남김 --> ", end='')
for i in range (len(ss)) :
    if ss[i].isalpha() :
        print(ss[i], end='')


#연습문제 12
#방법1
EE, ee, kk, nn, rr = "","","","",""
ss=input("문자열을 입력하세요 : ")
for i in range(len(ss)) :
    if ss[i].isalpha() :
        if ss[i].isupper() :
            EE+=ss[i]
        elif(ss[i].islower()==True) :
            ee+=ss[i]
        else :
            kk+=ss[i]
    elif ss[i].isdigit() :
        nn+=ss[i]
    else :
        rr+=ss[i]
print("대문자 : %s" %EE)
print("소문자 : %s" %ee)
print("숫자 : %s" %nn)
print("한글 : %s" %kk)
print("기타 : %s" %rr)
'''
#방법2
str=input("문자열을 입력하세요 : ")
upper_str=lower_str=korean_str=etc=""
num=0
for i in str :
    if i.isupper() :
        upper_str+=i
    elif i.islower() :
        lower_str+=i
    elif i.isdigit() :
        num=num*10+int(i)
    elif i.isalpha() :
        korean_str+=i
    else :
        etc+=i
print("대문자 : %s\n소문자 : %s\n숫자 : %d\n한글 : %s\n기타: %s"
      %(upper_str, lower_str, num, korean_str, etc))
