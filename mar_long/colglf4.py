import sys
sys.setrecursionlimit(200000)
#WA
def solve(n,e,h,a,b,c):
    ans = 1e15
    # 7 cases
    if n<=0:
        return 0
    #case 1 : only cakes
    if n<=e and n<=h:
        rate = n*c
        ans = min(rate, ans)
    
    # case 2 : only milkshakes
    if 3*n <= h:
        rate  = n*b
        ans = min(rate, ans)
    
    #case 3 : only omelletes
    if 2*n <= e:
        rate = n*a
        ans = min(ans, rate)
    
    # case4 : cakes + omelletes
    if 2*n-e <= h and e-n >= 1:
        
        if a-c < 0:
            tmp = min(n-1, e-n)
            ans = min(ans, (a-c)*tmp + n*c)
        else:
            tmp = max(1, n-h)
            ans = min(ans, (a-c)*tmp + n*c)

    # case 5 : cakes + milkshakes
    if 3*n-h >= 2*e and h-n >=2:

        if b-c<0:
            # cost should be min, x should be max
            tmp = min(n-1, (h-n)//2)
            ans = min(ans, (b-c)*tmp + n*c)
        else:
            tmp = max(1, n-e)
            ans = min(ans, (b-c)*tmp + n*c)
    
    # case 6 : milkshakes + omelletes
    if e>=2 and 3*n - 3*(e/2) <=h:

        if a-b < 0:
            tmp = min(n-1, e//2)
            ans = min(ans, (a-b)*tmp + n*b)
        else:
            tmp = max(1, (3*n - h + 2)//3)
            ans = min(ans, tmp*(a-b)+ n*b)
    
    # case 7 : everything
    if e>=3 and h>=4 and n>=3:
        ans = min(ans, a+b+c + solve(n-3, e-3, h-4, a, b, c))
    
    return ans


for i in range(int(input())):
    n,e,h,a,b,c = map(int, input().split())
    ans = solve(n,e,h,a,b,c)
    if ans != 1e15:
        print(ans)
    else:
        print(-1)