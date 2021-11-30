for _ in range(int(input())):
    n = int(input())
    l,r=0, n
    ans = 0
    while l<=r:
        mid=(l+r)//2
        if(mid*(mid+1)/2 == n):
            ans = mid
            break
        elif mid*(mid+1)/2 > n:
            r = mid-1
        else:
            ans = mid
            l = mid+1
    print(ans)