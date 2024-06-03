nn=input("글자 입력 : ")
a=0

for i in range(len(nn)) :
    if (nn[i]>='0') :
        a=2
        if(nn[i]>='2') :
            a=8
            if(nn[i]>='8') :
                a=10
                if(((nn[i]>='A') and (nn[i]<='F')) or ((nn[i]>='a') and (nn[i]<='f'))) :
                    a=16
                    
                else :
                    print("숫자가 아닙니다.")
                    a=0
                    break

if(a==2) :
    print("2진수 입니다")
elif(a==8) :
    print("8진수 입니다")
elif(a==10) :
    print("10진수 입니다")
elif(a==16) :
    print("16진수 입니다")
