t = int(input())

for i in range(t):
    n, k = input().split()
    n, k = int(n), int(k)

    c = k - k%n
    result = c/n
    print(int(result))
    '''
    explanation:
    k/n number of guns will be given to all
    the remaining guns(k%n) will be given to few kids
    but we are intrested in least
    so CAKEWALK!!
    I messed up :(
    '''