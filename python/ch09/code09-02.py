coffee=0

def coffee_machine(button) :
    print()
    print("#1.(자동으로) 뜨거운 물을 준비한다.")
    print("#2. (자동으로) 종이컵을 준비한다.")

    if coffee==1:
        print("#3. (자동으로) 보통커피를 탄다.")
    elif coffee==2:
        print("#3. (자동으로) 설탕커피를 탄다.")
    elif coffee==3:
        print("#3. (자동으로) 블랙커피를 탄다.")
    else:
        print("#3. (자동으로) 아무거나 탄다.")

    print("#4. (자동으로) 물을 붓는다.")
    print("#5. (자동으로) 스푼으로 젓는다.")
    print()

if __name__=="__main__":
    coffee=int(input("어떤 거피 드릴까요?(1:보통, 2:설탕, 3:블랙)"))
    coffee_machine(coffee)
    print("손님~ 커피 여기 있습니다.")
