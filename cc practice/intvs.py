from math import ceil
t = int(input())
for _ in range(t):
    n, k=map(int, input().split())
    arr=[int(x) for x in input().split()]
    correct=0
    slow=0
    bot=True
    least=ceil(n/2)
    for time in arr:
        if time != -1:
            correct+=1
        if time > k:
            slow += 1
        if time > 1:
            bot = False
    # print(least, correct, time, bot)


    if correct>=least:
        if slow<1:
            if ((correct==n) and bot):
                print("Bot")
            else:
                print("Accepted")
        else:
            print("Too Slow")
    else:
        print("Rejected")