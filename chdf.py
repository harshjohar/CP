for test in range(int(input())) :
    n,f = map(int, input().split())
    s = input()
    p = 0
    while p != n-1 :
        p1 = p + f -1
        p2 = p + f
        p3 = p + f +1
        #agar pothole aya toh
        check = 1
        if s[p1] != 0 :
            p = p1
            f = f- 1
            
        elif s[p2] != 0:
            p =  p2
            
        elif s[p3] != 0 :
            p = p3
            f = f +1
            
        else :
            check -= 1

        if check == 0 or f == 0 :
            print("NO", f,p)
            break

    if p == n  :
        if f != 0 :
            print("YES")
        else :
            print("NO")