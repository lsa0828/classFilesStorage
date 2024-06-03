ss=input("문자열을 입력하세요 : ")

upup, down, num, han, etc="", "", "", "", ""

for i in range(len(ss)):
    if ss[i].isalnum():
        if ss[i].isupper():
            upup+=ss[i]
        elif ss[i].islower():
            down+=ss[i]
        elif ss[i].isdigit():
            num+=ss[i]
        else:
            han+=ss[i]
    else:
        etc+=ss[i]

print("대문자 : %s" %upup)
print("소문자 : %s" %down)
print("숫자 : %s" %num)
print("한글 : %s" %han)
print("기타 : %s" %etc)
            
