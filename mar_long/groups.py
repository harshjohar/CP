t = int(input())
for _ in range(t):
    s = input()
    groups = 0
    n = len(s)
    running = False
    for i in range(n):
        if s[i]=='1' and running == False:
            running = True
            groups+=1
        elif s[i]=='0':
            running = False
    print(groups)