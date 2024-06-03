a=100
b=200
result=a*b
print(a,'*',b,'=',result)
print("%d * %d = %7.1f" % (a,b,result))
print("{0:d} * {1:d} = {2:d}".format(a,b,result))
print("%d * %d = %d" % (a,b,result))


print("%d %d %d" % (100, 200, 300))
print("%s %s %s" % ("안녕", "감사", "qkdl"))


'''
8bit=1bytes
1024byte=1KB
1024KB=1MB
1024MB=1GB
1024GB=1TB
'''

sel=int("16")
num="FF"
num10=int(num, 16)
print(hex(num10))
print(num10)
print(oct(num10))
print(bin(num10))


a=(100==100)
print(a)#True 나옴
a=(100==101)
print(a)#False 나옴
#a는 bool형

a="안녕하\"세요"
print(a)
b="잘부탁"
c=a+b
print(c)
c=b*2
print(c)
