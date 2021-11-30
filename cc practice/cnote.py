for _ in range(int(input())):
    x,y,k,n = map(int, input().split())
    data = []
    for i in range(n):
        p, c = map(int, input().split())
        data.append((p, c))
    x -= y # pages left
    lucky = False
    for copy in data:
        if x <= copy[0] and k >= copy[1]:
            lucky = True
    if lucky:
        print('LuckyChef')
    else:
        print('UnluckyChef')