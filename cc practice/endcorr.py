import bisect
n, m = map(int, input().split())
wealth = []
for i in range(n+m):
    x = int(input())
    if x != -1:
        pos = bisect.bisect_left(wealth, x)
        wealth.insert(pos, x)
    else:
        death = wealth.pop()
        print(death)