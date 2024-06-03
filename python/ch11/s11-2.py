inFp=None
inList, inSTr=[], ""
n=0

inFp=open("C:/Temp/data1.txt", "r")

inList=inFp.readlines()
for inStr in inList:
    n+=1
    print("%d: %s" %(n, inStr), end="")

inFp.close()
