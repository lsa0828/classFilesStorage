inFp=None
inList, inSTr=[], ""

inFp=open("C:/Temp/data1.txt", "r")

inList=inFp.readlines()
for inStr in inList:
    print(inStr, end="")

inFp.close()
