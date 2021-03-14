for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    li_sorted = sorted(li)
    working = True
    count = 0
    for i in range(n):
        if li[i] == li_sorted[i]:
            continue
        else:
            x = li.index(li_sorted[i])
            # print(x)
            if abs(x-i) > 2:
                print('Not Allowed')
                working = False
                break
            y = li_sorted.index(li[i])
            # print(y)
            if abs(y-i) > 2:
                print('Not Allowed')
                working = False
                break
            li[i], li[x] = li[x], li[i]
            # print(li)
            count+=1
    if working:
        print(count)