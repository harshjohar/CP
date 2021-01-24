t = int(input())
for i in range(t):
    n = input()
    l = len(n)
    n = int(n)
    # u = n%10
    # p = 10**(l-1)
    # f = n//p
    print((n//(10**(l-1)))+n%10)