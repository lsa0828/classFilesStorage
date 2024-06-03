myStr='파이썬은 재미있어요. 파이썬만 매일 공부하고 싶어요.'
strPosList=[]
index=0

while True:
    index=myStr.index('파이썬', index)
    strPosList.append(index)
    index=index+1

print("파이썬 글자 위치 --> ", strPosList)
