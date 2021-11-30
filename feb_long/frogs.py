t = int(input())

for _ in range(t):
    n = int(input())

    # storing the data of a frog in a list
    w = list(map(int, input().split()))
    l = list(map(int, input().split()))

    # a list containing full info of a frog
    frogs = []
    for i in range(n):
        frogs.append([w[i], l[i], i])
    
    result = 0

    for i in range(100):
        for j in range(n-1):
            if frogs[j][0] > frogs[j+1][0]:
                frogs[j][2] += frogs[j][1]
                result+=1
            frogs.sort(key=lambda x:x[2])
    
    for i in range(1, n):
        while frogs[i][2] <= frogs[i-1][2]:
            frogs[i][2] += frogs[i][1]
            result+=1
    
    print(result)