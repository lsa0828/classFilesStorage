def savetel():
    sn=input("(입력모드)이름을 입력하시오 : ")
    sp=input("전화번호를 입력하시오 : ")
    ddd[sn]=sp

def search():
    ss=input("(검색모드)이름을 입력하시오 : ")
    if ss in ddd.keys():
        print("%4s의 전화번호는 %s 입니다." % (ss, ddd[ss]))
    else:
        print("%4s의 전화번호는 리스트에 없습니다.")
    

ddd={}
while(True):
    n=int(input("기능을 선택하세요. 1) 입력모드 2)검색모드 : "))
    if n==1:
        savetel()
    elif n==2:
        search()
