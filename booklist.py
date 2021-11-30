m = int(input())
arr = []
register = []
out = []

arr.append([int(i) for i in input().split()])
# print(arr)

n = int(input())

for i in range(n):
    r = int(input())
    register.append(r)
# print(register)

for entry in register:
    out.append(arr[0][entry-1])
    del arr[0][entry-1]

for output in out:
    print(output)