# from itertools import combinations 
# Rj
t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    copy = [ x for x in arr]
    a = max(copy)
    copy.remove(a)
    b = max(copy)

    c = min(arr)
    arr.remove(c)
    d = min(arr)

    ans1 = a*b + (max(a, b) - min(a, b))
    ans2 = c*d + (max(c, d) - min(c, d))

    if ans1 > ans2:
        print(ans1)
    else:
        print(ans2)