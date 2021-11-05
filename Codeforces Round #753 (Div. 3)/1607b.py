for _ in range(int(input())):
    x, n = map(int, input().split())
 
    ans = x
 
    if(x%2):
        # x odd
        mod = n%4
        num = n//4
        if(mod==0):
            ans+=0
        if(mod==1):
            ans+=(n)
        if(mod==2):
            ans-=1
        if(mod==3):
            ans-=(1+n)  
    else:
        # x even
        mod = n%4
        num = n//4
        if(mod==0):
            ans+=0
        if(mod==1):
            ans-=(n)
        if(mod==2):
            ans+=(1)
        if(mod==3):
            ans+=(n+1)
 
    print(ans)