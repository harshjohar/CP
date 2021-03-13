from itertools import combinations
#TLE
for _ in range(int(input())):
    n, k = map(int, input().split())
    li = list(map(int, input().split()))
    ans = 1e9
    arr = combinations(li, k)
    for i in list(arr):
        ansa = max(i)-min(i)
        if ansa < ans:
            ans = ansa
    print(ans)