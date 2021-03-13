t = int(input())

def good(arr, k, n):
    # count the hrs required for a particular k
    count=0
    li = arr[:]
    for i in range(n):
        while li[i] > 0:
            li[i]-=k
            count+=1
    # print('y', count, k)
    # print(arr, li)
    return count

def binary(li, n, h):
    lo = 0
    hi = n

    while lo < hi:
        mid = lo + (hi-lo)//2
        # print(mid)
        if good(li, li[mid], n) == h:
            # print('e')
            # print(li[mid])
            return li[mid]
        elif good(li, li[mid], n) > h:
            lo = mid+1
        else:
            hi = mid-1
    return -1

for _ in range(t):
    n, h = map(int, input().split())
    data = list(map(int, input().split()))
    data.sort()
    ans = binary(data, n, h)
    print(ans)
    