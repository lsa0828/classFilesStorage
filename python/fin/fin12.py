def testPrime(n):
    if(n==1):
        print(n, end=' ')
    for i in range(2, n):
        if (n%i!=0):
            print(n, end=' ')
            break

startN=int(input("시작숫자:"))
endN=int(input("끝숫자:"))

for i in range(startN, endN+1):
    testPrime(i)
