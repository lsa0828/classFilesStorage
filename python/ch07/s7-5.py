animals={'개':'강아지', '호랑이':'개호주', '곰':'능소니', '말':'망아지',
         '닭':'병아리', '고등어':'고도리', '명태':'노가리'}

while(True) :
    mypet=input(str(list(animals.keys())) + "중 새끼 이름을 알고 싶은 동물은?  ")
    if mypet in animals :
        print("<%s>의 새끼는 <%s>입니다." %(mypet, animals.get(mypet)))
    elif mypet=='끝' :
        break
    else :
        print("그런 동물는 없습니다. 확인해 보세요.")

'''
animals.keys() -> dict_keys(['개', '고양이', ..])
animals.get(키), animals[키]
'''
