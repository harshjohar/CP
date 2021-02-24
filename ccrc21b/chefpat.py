t = int(input())
for _ in range(t):
    n = int(input())
    patients = list(map(int, input().split()))
    wait = [0]*n
    # order = sorted(patients, reverse=True)
    curr = 1
    i=0
    queue = sorted(patients, reverse=True)
    while i<n:
        max_idx = patients.index(queue[i])
        wait[max_idx] += curr
        patients[max_idx] = 0
        curr+=1
        i+=1
    for j in range(n):
        print(wait[j], end =' ')
    print()