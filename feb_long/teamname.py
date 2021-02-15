t = int(input())

for _ in range(t):
    n = int(input())

    s = input().split()
    left = {}

    for x in s:
        if x[1:] not in left:
            left[x[1:]] = {x[0]}
        else:
            left[x[1:]].add(x[0])
    total = 0

    for k1,v1 in left.items():
        for k2,v2 in left.items():
            if k1 != k2:
                total += len(v1.difference(v2))*len(v2.difference(v1))

    print(total)