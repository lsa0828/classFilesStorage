ss=input("문자열을 입력하세요:")

print("원본 내용 --> %s" % ss)
print("변경 내용 --> ", end='')
for i in range(len(ss)):
    if i%2!=0:
        print("#", end='')
    else:
        print(ss[len(ss)-(i+1)], end='')
