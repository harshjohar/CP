for _ in range(int(input())):
    n=int(input())
    arr=list(map(int, input().split()))
    flag = False
    for i in range(n-1):
        if arr[i]<arr[i+1]:
            flag=True
    if flag:
        print("Yes")
    else:
        print("No")