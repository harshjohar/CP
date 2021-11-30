for _ in range(int(input())):
    n, x = map(int, input().split())
    data = []
    for i in range(n):
        inp = tuple(map(int, input().split()))
        data.append(inp)
    data.sort(reverse=True, key = lambda x:x[1])
    for row in data:
        if row[0] <= x:
            print(row[1])
            break