for _ in range(int(input())):
    n = int(input())
    salary = list(map(int, input().split()))
    salary.sort()
    count = 0
    j=1
    for i in range(n-1,0,-1):
        count+=(salary[i]-salary[i-1])*j
        j+=1
    print(count)