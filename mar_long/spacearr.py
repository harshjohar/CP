t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    value = 0
    turn = 0
    for i in range(n):
        if (i+1-arr[i]) < 0:
            turn = 1
            break
        value += i+1-arr[i]
    
    if turn == 1:
        print('Second')
    else:
        if value%2==1:
            print('First')
        else:
            print('Second')