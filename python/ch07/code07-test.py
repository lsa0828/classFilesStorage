aa=[]
t=[]

for i in range(3) :
    for j in range(4) :
        t.append(i*j)
    aa.append(t)
    t=[]
print(aa)
