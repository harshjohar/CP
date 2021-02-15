# TLE
def sieve(is_prime, N):
    """
    We cross out all composites from 2 to sqrt(N)
    """
    i = 2
    # This will loop from 2 to int(sqrt(x))
    while i*i <= N:
        # If we already crossed out this number, then continue
        if is_prime[i] == 0:
            i += 1
            continue

        j = 2*i
        while j < N:
            # Cross out this as it is composite
            is_prime[j] = 0
            # j is incremented by i, because we want to cover all multiples of i
            j += i

        i += 1


t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    x += 1
    is_prime = [1]*x
    # We know 0 and 1 are composites
    is_prime[0] = 0
    is_prime[1] = 0
    
    sieve(is_prime, x)
    n=0
    for i in range(1, x):
        if is_prime[i] == 1:
            n += 1
    # print(n)
    if n > y:
        print('Divyam')
    else:
        print('Chef')