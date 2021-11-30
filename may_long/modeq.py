# if b>a
# (M%a)%b = M%a
from sys import stdin, stdout
def factors(x):
    result = []
    i = 1
    while i*i <= x:
        if x % i == 0:
            result.append(i)
            if x//i != i: 
                result.append(x//i)
        i += 1
    # result.sort()
    return result
    
def search(arr, b):
    ans=0
    for i in range(len(arr)):
        if arr[i]<b:
            ans+=1
    return ans

def solve(n, m):
    ans=0
    for b in range(2, n+1):
        y = m%b
        m=m-y
        fac = factors(m)
        # print(fac)
        # print(bisect_left(fac, b))
        ans += search(fac, b)
    return ans


for _ in range(int(stdin.readline().rstrip())):
    n,m=map(int, stdin.readline().rstrip().split())
    stdout.write(str(solve(n, m)) + "\n")

# print(factors(23786))
# print(bisect_left([1,2,3,4,78,91,102], 4))