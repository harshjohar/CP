def merge(a, b):
    m = len(a)
    n = len(b)
    output = [0]*(m+n)
    i = 0
    j = 0
    k = 0
    while i<m and j<n:
        if a[i]<b[j]:
            output[k] = a[i]
            k+=1
            i+=1
        else:
            output[k] = b[j]
            k+=1
            j+=1
    while j<n:
        output[k]=b[j]
        k+=1
        j+=1
    while i<m:
        output[k]=a[i]
        k+=1
        i+=1
    return output


def Merge_sort(arr, left, right):
    if left==right:
        return [arr[left]]
    mid = (left+right)//2
    left_half = Merge_sort(arr, left, mid)
    right_half = Merge_sort(arr, mid+1, right)

    output = merge(left_half, right_half)
    return output


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    output = Merge_sort(arr, 0, len(arr)-1)
    print(*output)
