def gcd(a, b):
    if b>a:
        return gcd(b, a)
    if(b==0):
        return a
    return gcd(b, a%b)

def lcm(a, b):
    return (a*b)//gcd(a, b)

for _ in range(int(input())):
    s = input()
    t = input()
    sL = len(s)
    tL = len(t)
    lcmST = lcm(sL, tL)
    sD = s*(lcmST//sL)
    tD = t*(lcmST//tL)
    if(sD==tD):
        print(sD)
    else:
        print(-1)