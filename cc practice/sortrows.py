n = int(input())
rows = []
for i in range(n):
    p = input().split()
    p.pop()
    h=' '.join(p)
    rows.append(h)

# print(rows)
rows.sort()
# print(rows)
for i in rows:
    print(i)