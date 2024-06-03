inStr, outStr="", ""
sum, ev=0, 0

infname=input("실수 저장 파일 이름 입력: ")
outfname=input("결과 파일 이름 입력: ")

inF=open(infname, 'r')
outF=open(outfname, 'w')

inStr=inF.readlines()
lenstr=len(inStr)
for n in inStr:
    sum+=int(n)
    ev=sum/lenstr

outStr="합계="+str(sum)+"\n평균="+str(ev)

outF.write(outStr)

inF.close()
outF.close()
