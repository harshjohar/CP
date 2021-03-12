n = int(input())
sticks = list(map(int, input().split()))
zeroes = 0
sticks.sort()
# TLE
while len(sticks) > 0:
    cut_length = sticks[0]
    for i in range(len(sticks)):
        sticks[i]-=cut_length
    print(len(sticks))
    # print(sticks)
    while sticks[0] == 0:
        sticks.pop(0)
        if len(sticks) == 0:
            break
    # print(sticks)
