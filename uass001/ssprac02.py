n = int(input())
arr = list(map(int, input().split()))

# bubble sort

for i in range(n):
    swap = False
    for i in range(n-i-1):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
            swap = True
            # print(*arr)
    # print(*arr)
    if not swap:
        # print(*arr)
        exit()
    print(*arr)
# print(*arr)