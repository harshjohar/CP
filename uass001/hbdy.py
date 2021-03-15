for _ in range(int(input())):
    x = int(input())
    
    lo = 1
    hi = 1e6
    ans = 1
    while lo<=hi:
        mid = (lo+hi)//2
        cost_mid = (mid*(mid+1)*(2*mid+1))/6
        if cost_mid <= x:
            ans = mid
            lo = mid+1
        else:
            hi = mid-1
    print(int(ans))