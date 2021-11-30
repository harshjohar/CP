n = int(input())
arr = list(map(int, input().split()))
query_count = int(input())
queries = list(map(int, input().split()))
sum=0
for i in arr:
    sum+=i
mod = 10**9 + 7
for i in range(query_count):
    sum*=2
    print(sum%mod)