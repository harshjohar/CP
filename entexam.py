t = int(input())
for i in range(t):
    n, k, e, m = map(int, input().split())
    marks = []

    for i in range(n-1):
        marks.append(0)
        for j in range(e):
            inp = int(input())
            marks[i]+=inp
    
    marks.append(0)
    for i in range(e-1):
        inp = int(input())
        marks[n-1]+=inp
    obt = marks[n-1]

    marks.sort()
    marks.reverse()
    
    req_marks = marks[k-1]-obt+1
    if req_marks<0:
        print(0)
    else:
        if req_marks>m:
            print('Impossible')
        else:
            print(req_marks)