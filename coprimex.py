def isPrime(n):
    if n<2:
        return False
    if n<=3:
        return True
    if n%2==0 or n%3==0:
        return False
    i=5
    while i*i <=n:
        if n%i==0 or n%(i+2)==0:
            return False
        i+=6
    return True

t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    r+=1
    while not isPrime(r):
        r+=1
    print(r)