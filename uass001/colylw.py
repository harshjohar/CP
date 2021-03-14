def find_min(r,b):
    return min(r,b,(r+b)//3)

for _ in range(int(input())):
    n,r,g,b = map(int, input().split())
    max_possible = (r+g+b)//3
    if max_possible >= n:
        if r>=n and b>=n:
            ans = n
        else:
            ans = min(r,b)
    else:
        if g >= min(r,b):
            ans = min(r,b)
        else:
            ans = g+ find_min(r-g,b-g)
    print(ans)