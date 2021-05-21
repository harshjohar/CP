n=int(4e6)+5
arr = [0 for _ in range(n)]
ans = [0 for _ in range(n)]

for i in range(n):
    arr[i]=i
    ans[i]=0

for val in range(2, n):
    if arr[val] == val:
        arr[val]=val-1
    for i in range(2*val, n, val):
        arr[i]=(arr[i]/val)*(val-1)

for i in range(1, n):
    arr[i]+=i-1
    for j in range(2*i, n, i):
        arr[j]+=i*((1+arr[j//i])/2)

for _ in range(int(input())):
    k = int(input())
    print(ans[4*k+1])