def pow(base, power, mod):
    ans = 1
    base=base%mod
    if base==0:
        return 0
    while power>0:
        if (power&1) == 1:
            ans = (ans*base)%mod
        power>>=1
        base = (base*base)%mod
    return ans
mod = 10**9 + 7
for _ in range(int(input())):
    n = int(input())
    print(pow(2, n-1, mod))