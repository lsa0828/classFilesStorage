inFp, outFp=None, None
fsName, ftName, inStr="","",""

fsName=input("소스 파일명을 입력하세요: ")
ftName=input("타깃 파일명을 입력하세요: ")

inFp=open(fsName, "r")
outFp=open(ftName, "w")

inList=inFp.readlines()
for inStr in inList:
    outFp.writelines(inStr)

inFp.close()
outFp.close()
print("---파일이 정상적으로 복사되었음---")
