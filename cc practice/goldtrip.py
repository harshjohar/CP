import sys
for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        for i in range(1, n):
            arr[i]+=arr[i-1]
        # print(arr)
        q = int(input())
        for i in range(q):
            s,e=map(int, sys.stdin.readline().strip().split())
            # print(s,e)
            if s!=1:
                print(arr[e-1]-arr[s-2])
            else:
                print(arr[e-1])