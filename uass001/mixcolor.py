for _ in range(int(input())):
    n = int(input())
    colors = list(map(int, input().split()))
    colors.sort()
    count = 0
    for i in range(n-1):
        if colors[i]==colors[i+1]:
            count+=1
    print(count)