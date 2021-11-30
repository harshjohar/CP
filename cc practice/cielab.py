a, b = map(int, input().split())
diff = a-b
ans = str(diff)
li = list(ans)
li[-1] = int(li[-1])
if li[-1] == 9:
    li[-1] -= 1
else:
    li[-1] += 1

for i in range(len(li)):
    print(li[i], end='')