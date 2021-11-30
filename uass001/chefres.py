def binary(li, p):
    # basically bisect left sort of thing
    lo = 0
    hi = len(li)
    ans = -1
    while lo<=hi:
        mid = (lo+hi)//2
        if mid >=len(li) or mid<0:
            return ans
        
        s,e = li[mid][0], li[mid][1]
        if p>=e:
            lo = mid+1
        elif p<e:
            ans = mid
            hi = mid-1
    return ans


t = int(input())
for _ in range(t):
    n,m = map(int, input().split())
    timings = []
    for i in range(n):
        s,e = map(int, input().split())
        timings.append((s,e))
    timings.sort(key = lambda x:x[0])

    for i in range(m):
        p = int(input())
        ans = binary(timings, p)
        if ans == -1:
            print(ans)
        else:
            if p>= timings[ans][0]:
                print(0)
            else:
                print(timings[ans][0]-p)
