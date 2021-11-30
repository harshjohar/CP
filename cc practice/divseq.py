def dividing_sequences(arr, n):
    tmp = [0 for i in range(n)]
    tmp[0] = 1

    for i in range(1, n):
        tmp[i] = 1
        for j in range(0, i):
            if tmp[j] != 0 and arr[i]%arr[j]==0:
                tmp[i] = max(tmp[i], tmp[j]+1)
        
    return max(tmp)

n = int(input())
arr=[]
for _ in range(n):
    arr.append(int(input()))
# print(arr)
print(dividing_sequences(arr, n))