t = int(input())

for i in range(t):
    n = int(input())
    factorial = 1
    for j in range(1, n+1):
        factorial *= j
    print(factorial)