for _ in range(int(input())):
    # wa
    x1, y1, x2, y2 = map(int, input().split())
    # k = (y2-y1)/(x2-x1)
    # c = (((x1+x2)/2*k) + (y1+y2)/2)
    if x1 != x2:
        ans = (x1**2 - x2**2 + y1**2 - y2**2)/2*(x1-x2)
    print(ans)