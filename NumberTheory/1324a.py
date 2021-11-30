for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    parity=True

    check=0 if arr[0]%2==0 else 1

    for i in arr:
        if i%2!=check:
            parity=False
            break
    
    if(parity):
        print("YES")
    else:
        print("NO")