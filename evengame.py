def iseven(n):
    return n%2==0
# print(iseven(9))

t=int(input())
for _ in range(t):
    n = int(input())
    arr = [int(i) for i in input().split()]
    sum = 0
    for i in range(n):
        sum+=arr[i]
    if sum%2==0:
        print(1)
    else:
        print(2)