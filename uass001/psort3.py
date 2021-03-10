n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
pairs = []
for i in range(n):
    pairs.append((a[i],b[i]))
print(pairs)
