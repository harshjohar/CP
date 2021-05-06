import math
 
def highestPowerof2(n):
    p = int(math.log(n, 2))
    return int(pow(2, p))

for _ in range(int(input())):
    n = int(input())
    flag=1 #alice
    while n!=1:
        x = highestPowerof2(n)
        if n==x:
            n= int(n/2)
            flag+=1
        else:
            n-=x
            flag+=1
        # print(n)
    if flag%2!=0:
        print('Bob')
    else:
        print('Alice')