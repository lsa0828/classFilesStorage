def para_func(*para):#튜플
    result=0
    for num in para:
        result=result+num
    return result

def dic_func(**para):#딕셔너리
    for k in para.keys():
        print("%s --> %d명입니다." %(k, para[k]))

hap=0

hap=para_func(10,20)#튜플
print("매개변수가 2개인 함수를 호출한 결과 ==> %d" %hap)
hap=para_func(10,20,30)
print("매개변수가 3개인 함수를 호출한 결과 ==> %d" %hap)
hap=para_func(10,20,30,40,50,60,70,80,90,100)
print("매개변수가 10개인 함수를 호출한 결과 ==> %d" %hap)
print()
dic_func(트와이스=9, 소녀시대=7, 걸스데이=4, 블랙핑크=4)
