t = int(input())
for _ in range(t):
    n = int(input())
    patients = list(map(int, input().split()))
    data = {}
    for i in range(len(patients)):
        data[patients[i]] = [i]
    wait = [0]*n
    # order = sorted(patients, reverse=True)
    curr = 1
    i=0
    patients.sort(reverse=True)
    while i<n:
        idx = data[patients[i]]
        wait[idx]+=1
        curr+=1
        i+=1
    for j in range(n):
        print(wait[j], end =' ')
    print()