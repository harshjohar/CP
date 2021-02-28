t = int(input())
for _ in range(t):
    d, c = map(int, input().split())
    a1, a2, a3 = map(int, input().split())
    b1, b2, b3 = map(int, input().split())
    day1 = a1+a2+a3
    day2 = b1+b2+b3
    # total_c = 0
    # total_d = 0
    # coupon_added = False
    if day1>=150 and day2>=150:
        total_c = day1+day2+c
        total_d = day1+day2+2*d
    elif day1>=150 and day2<150:
        total_c = day1+day2+c+d
        total_d = day1+day2+2*d
    elif day2>=150 and day1<150:
        total_c = day1+day2+c+d
        total_d = day1+day2+2*d
    else:
        total_d = day1+day2+2*d
        total_c = day1+day2+2*d+c
    
    if total_c < total_d:
        print('YES')
    else:
        print('NO')