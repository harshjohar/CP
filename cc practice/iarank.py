import bisect
n = int(input())
wealth=[]
for i in range(n):
    x = int(input())
    # wealth.sort()
    pos = bisect.bisect_right(wealth, x)
    wealth.insert(pos, x)
    # wealth.reverse()
    print(len(wealth)-pos)
# print(wealth)