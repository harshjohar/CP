def good(mid, n, h, w):
    return (mid//w) * (mid//h) >= n

def rec_in_sq(n,h,w):
    lo = 0
    hi = max(h,w)*n
    ans = -1
    while lo<=hi:
        mid = (lo+hi)//2
        if good(mid, n, h, w):
            hi = mid-1
            ans = mid
        else:
            lo = mid+1
    return ans

for _ in range(int(input())):
     n,h,w = map(int, input().split())
     print(rec_in_sq(n,h,w))