inStr=input("문자열 입력 : ")

if inStr.isalnum() :
    if inStr.isalpha() :
        print("글자입니다.")
    elif inStr.isdigit() :
        print("숫자입니다.")
    else :
        print("글자+숫자입니다.")
else :
    print("모르겠습니다.")
