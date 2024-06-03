a=[0xA37B, 0x23CC, 0x88D9, 0xBB8F, 0x3A9A]
n=0

for i in range(4) :
    for k in range(i+1, 5) :
        if a[i]>a[k] :
            a[i], a[k] = a[k], a[i]

print(a[0], hex(a[1]), hex(a[2]), hex(a[3]), hex(a[4]))
