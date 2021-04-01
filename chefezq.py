from math import ceil
for _ in range(int(input())):
    n, k = map(int, input().split())
    queries = list(map(int, input().split()))
    queries.append(0) # number of extra days
    days = 0
    for i in range(n):
        if queries[i] >= k:
            days+=1
            queries[i+1] += queries[i]-k
        else:
            days+=1
            break
    if queries[n] != 0:
        days += ceil(queries[n]/k)
        if queries[n]%k == 0:
            days+=1
    # print(queries)
    print(days)