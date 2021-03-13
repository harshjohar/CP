from math import ceil
def is_ans(arr, k, h):
    count = 0
    for i in arr:
        count+=ceil(i/k)
    if count<=h:
        return True
    else:
        return False

t = int(input())
for _ in range(t):
    n, h = map(int, input().split())
    li = list(map(int, input().split()))

    lo = 1
    hi = max(li)

    while lo <= hi:
        mid = lo + (hi-lo)//2

        if is_ans(li, mid, h):
            ans = mid
            hi=mid-1

        else:
            lo=mid+1
    print(ans)