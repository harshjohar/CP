for _ in range(int(input())):
    n, k = map(int, input().split())
    li = list(map(int, input().split()))
    li.sort()
    ans = 1e9
    for i in range(n-k+1):
        tmp = li[i+k-1]-li[i]
        # print(tmp)
        if tmp < ans:
            ans = tmp
    print(ans)