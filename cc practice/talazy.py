for i in range(int(input())):
    n, b, m = [int(x) for x in input().split()] 
    result = 0
    while(n):
        if n % 2 != 0:
            result += m*(n+1)//2
            n -= (n+1)//2
        else:
            result += m*(n//2)
            n -= n//2

        if n != 0:
            result += b
            m = m*2
    print(result)