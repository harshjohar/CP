for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    data = {}
    for i in li:
        if i in data:
            data[i]+=1
        else:
            data[i]=1
    khatam=False
    for i in data:
        if data[i] >= 2:
            print('yes')
            khatam = True
            break
    if not khatam:
        print('no')