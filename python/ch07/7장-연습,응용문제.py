#연습문제 6
nn=[100,200,300,400,500]

nn[1]=777
print(nn)

nn[1]=[444,555]
print(nn)

nn[1:4]=[444,555]
print(nn)

nn[2:]=[]
print(nn)


#연습문제 14
myData=[[n*m for n in range(1,3)] for m in range(2,4)]
print(myData)

'''
#위에 문장을 풀어쓰면
[___ for m in range(2,4)]
[n*m for n in range(1,3)]

m=2
n=1,2

m=3
n=1,2

print(myData)

[[2,4],[3,6]]
'''

#응용문제 01
import random

data=[]
i,k=0,0

if __name__=="__main__" :
    for i in range(0,10):#임의의 데이터 10개 생성
        tmp=hex(random.randrange(0,100000))#16진수로 변환
        data.append(tmp)

    print("정렬 전 데이터: ", end='')
    [print(num, end=' ') for num in data]##리스트 컴프리헨션

    '''
    for num in data:
        print(num, end=' ')
    '''

    #선택정렬
    for i in range(0,len(data)-1) :
        for k in range(i+1, len(data)) :
            if int(data[i],16)>int(data[k],16) :
                #값 교환 방법(tmp 중간 매개체)
                tmp=data[i]
                data[i]=data[k]
                data[k]=tmp

    print("\n정렬 후 데이터: ", end='')
    [print(num, end=' ') for num in data]
