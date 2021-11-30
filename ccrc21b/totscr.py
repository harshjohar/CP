t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    marks = list(map(int, input().split()))
    for i in range(n):
        sheet = input()
        result = 0
        for j in range(len(sheet)):
            if sheet[j] == '1':
                result+=marks[j]
        print(result)