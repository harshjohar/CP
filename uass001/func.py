import math
# tle
def root(i,x):
    return math.floor(x**(1/float(i)))

def val(x, A, N):
    ans = 0
    for i in range(N):
        ans+=root(i+1, x)*A[i]
    return ans

t = int(input())
mod = 1e9+7
for _ in range(t):
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))
    Qarr = list(map(int, input().split()))
    output = []
    for i in range(q):
        ans = val(Qarr[i], arr, n)
        print(ans, end=' ')
    print()
