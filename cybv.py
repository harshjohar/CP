t = int(input())

for i in range(t):
    n, k = input().split()
    n, k = int(n), int(k)

    arr = []

    for j in range(n):
        arr.append(int(0))
    
    while k > 0:
        for l in range(n):
            arr[l] += 1
            k -= 1
            if k <= 0:
                break
    # for w in range(n):
        # print(arr[w], end=', ')
    
    min = arr[0]
    for q in range(n):
        if arr[q] < min:
            min = arr[q]
    print(min)