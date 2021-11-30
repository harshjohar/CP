for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
 
    a.sort()
 
    if n==1:
        print(a[0])
        continue
    
    ans = a[0]
    for i in range(1, n):
        ans = max(ans, a[i]-a[i-1])
 
    print(ans)