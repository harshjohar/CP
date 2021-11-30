n, d = map(int, input().split())
data = []
for _ in range(n):
    data.append(int(input()))

data.sort()
count = 0
i=0

while i < n-1:
    if data[i+1]-data[i] <= d:
        count+=1
        i+=2
    else:
        i+=1
    
print(count)
        