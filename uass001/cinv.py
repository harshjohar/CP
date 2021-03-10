# tle
def merge(arr, left, mid, right):
    tmp = [0]*(right-left+1)
    i, j, k, count = left, mid+1, 0, 0
    while i<=mid and j<= right:
        if arr[i]<=arr[j]:
            tmp[k] = arr[i]
            i+=1
            k+=1
        else:
            count+=(mid-i+1)
            tmp[k] = arr[j]
            j+=1
            k+=1

    while i<=mid:
        tmp[k] = arr[i]
        i+=1
        k+=1
    while j<=right:
        tmp[k] = arr[j]
        j+=1
        k+=1
    
    k=0
    for i in range(left, right+1):
        arr[i]= tmp[k]
        k+=1

    return count

def mergesort(arr, left, right):
    if left < right:
        mid = (left+right)//2
        count_left = mergesort(arr, left, mid)
        count_right = mergesort(arr, mid+1, right)
        count_mergers = merge(arr, left, mid, right)
        return count_left+count_right+count_mergers
    return 0

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(mergesort(arr, 0, n-1))