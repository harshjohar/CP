n,k = map(int, input().split())
li = list(map(int, input().split()))
prefix = [li[0]]
for i in range(1, n):
    prefix.append(li[i]+prefix[i-1])
ans = []
for i in range(n-k):
    ans.append(prefix[i+k]-prefix[i])
print(max(ans))