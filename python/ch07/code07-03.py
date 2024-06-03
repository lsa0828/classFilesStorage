aa=[]
for i in range(0, 4) :
    aa.append(0)

print(aa)

hap = 0

for i in range(0, 4) :
    aa[i]=int(input(str(i+1) + "번째 숫자 : "))

print(aa)

#hap=aa[0]+aa[1]+aa[2]+aa[3]
for i in range(0, 4) :
    hap += aa[i]

print("합계 ==> %d" %hap)
