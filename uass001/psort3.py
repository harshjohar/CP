n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
pairs = []
for i in range(n):
    pairs.append((a[i],b[i]))
# print(pairs)
pairs.sort(key = lambda x:x[1], reverse=True)
# print(pairs)

i=0
tmp=pairs[0][1]
j=0
while j<=n:
    if j == n:
        if pairs[j-1][1] == tmp:
            pairs[i:j] = sorted(pairs[i:j], key=lambda x:x[0])
        j+=1
    elif pairs[j][1] == tmp:
        j+=1
    else:
        pairs[i:j] = sorted(pairs[i:j], key=lambda x:x[0])
        if j<n:
            tmp = pairs[j][1]
            i = j
# print(pairs)
# print(pairs[len(pairs)-1])
for i in range(n):
    print(pairs[i][0], pairs[i][1], end=' ')