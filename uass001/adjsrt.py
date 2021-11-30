def bubble_sort_custom(arr, n):
    ans = []
    for i in range(n):
        swap = False
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                ans.append(j)
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swap = True
        if not swap:
            return ans
    return ans

n = int(input())
arr = list(map(int, input().split()))
ans = bubble_sort_custom(arr, n)
print(len(ans))
print(*ans)