foods={'밥류':'김치볶음밥', '면류':'우동', '빵류':'팥빵', '떡류':'꿀떡'}

while(True) :
    myfood=input(str(list(foods.keys())) + "중 좋아하는 음식류는? ")
    if myfood in foods :
        print("<%s> 중에서 <%s>를 추천합니다." %(myfood, foods.get(myfood)))
    elif myfood=='끝' :
        break
    else :
        print("그런 음식류는 없습니다. 확인해 보세요.")
