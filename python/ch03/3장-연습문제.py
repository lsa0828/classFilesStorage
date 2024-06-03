'''
#15
num=12345678
hex_num=hex(num)
oct_num=oct(num)
bin_num=bin(num)
print('10진수 ==> ', num)
print('16진수 ==> ', hex_num)
print('8진수 ==> ', oct_num)
print('2진수 ==> ', bin_num)
'''

#방법1
num=input("글자 입력: ")

if('0' <= num <= '1') :
    print("2진수 또는", end=" ")
if('0' <= num <= '7') :
    print("8진수 또는", end=" ")
if('0' <= num <= '9') :
    print("10진수 또는", end=" ")
if('0'<=num<='9' or 'A' <= num <= 'F' or 'a' <= num <= 'f') :
    print("16진수 입니다")
else :
    print("숫자가 아닙니다.")

'''
#방법2
num=input("글자 입력: ")

if('0' <= num <= '1') :
    print("2진수 또는 8진수 또는 10진수 또는 16진수 입니다")
elif('2' <= num <= '7') :
    print("8진수 또는 10진수 또는 16진수 입니다")
elif('8' <= num <= '9') :
    print("10진수 또는 16진수 입니다")
elif('A' <= num <= 'F' or 'a' <= num <= 'f') :
    print("16진수 입니다.")
else :
    print("숫자가 아닙니다.")
'''
