import sys
sys.setrecursionlimit(20000000)
mod = 1000000007
dp=[]
total=[]
v=[]

def dfs(curr, par):
    dp[curr]=1
    total[curr]=1
    sum=0
    # tmp=curr
    for i in range(len(v[curr])):
        node=v[curr][i]
        if node!=par:
            dfs(node, curr)
            dp[curr]+=(2*dp[node])%mod
            dp[curr]%=mod
            total[curr]+=total[node]
            total[curr]%=mod
            total[curr]+=dp[node]
            total[curr]%=mod
            sum+=dp[node]
    
    for i in range(len(v[curr])):
        node=v[curr][i]
        if node!=par:
            total[curr]+=(dp[node]*((sum-dp[node]+mod)%mod))%mod
            total[curr]%=mod
    # print("curr: ", tmp)
for _ in range(int(input())):
    ans=0
    n=int(input())
    # element 0 is just for fun
    v=[[] for i in range(n+1)]
    dp=[0 for i in range(n+1)]
    total=[0 for i in range(n+1)]
    for i in range(n-1):
        l, r = map(int, input().split())
        v[l].append(r)
        v[r].append(l)

    dfs(1, 1)
    ans=total[1]%mod
    print(ans)
    print(dp)
    print(total)
    dp.clear()
    v.clear()
    total.clear()
