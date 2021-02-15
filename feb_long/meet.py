t = int(input())

def time_format(time):
    time_24 = 0
    if time[-2:] == 'AM':
        if int(time[0]) == 1 and int(time[1]) == 2:
            time_24 += int(time[3])*10 + int(time[4])
        else:
            time_24 += int(time[0])*1000 + int(time[1])*100 + int(time[3])*10 + int(time[4])
    elif time[-2:] == 'PM':
        if int(time[0]) == 1 and int(time[1]) == 2:
            time_24 += int(time[0])*1000 + int(time[1])*100 + int(time[3])*10 + int(time[4])
        else:
            time_24 += 1200 + int(time[0])*1000 + int(time[1])*100 + int(time[3])*10 + int(time[4])
    return time_24

for _ in range(t):
    start_time = input()   
    st_24 = time_format(start_time)

    n = int(input())
    for i in range(n):
        time_s, a_s, time_e, a_e = map(str, input().split())
        time_s = time_s + ' ' + a_s
        time_e = time_e + ' ' + a_e
        ts_24 = time_format(time_s)
        te_24 = time_format(time_e)

        if st_24 >= ts_24 and st_24 <= te_24:
            print(1, end='')
        else:
            print(0, end='')
    print()