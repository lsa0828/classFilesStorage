inFp=None
inStr=""
n=0

inFp=open("C:/Temp/data1.txt", "r")

while True:
    inStr=inFp.readline()
    if inStr=="":
        break;
    n+=1
    print("%d: %s" %(n, inStr), end="")

inFp.close()
