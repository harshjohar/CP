# after contest
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    s = input()
    left=[]
    right=[]

    for i in range(n):
        if(s[i]=='B'):
            left.append(arr[i])
        else:
            right.append(arr[i])

    left.sort()
    right.sort(reverse=True)

    alright = True

    for i in range(len(left)):
        if left[i] < i+1:
            alright=False
    
    for i in range(len(right)):
        if right[i] > n-i:
            alright=False

    print("YES") if alright else print("NO")