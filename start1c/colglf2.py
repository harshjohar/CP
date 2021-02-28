t = int(input())
for _ in range(t):
    time = 0
    episodes = 0
    seasons = int(input()) # no. of seasons
    seasons_list = []
    intro_song = list(map(int, input().split()))
    for i in range(seasons):
        item = list(map(int, input().split()))
        seasons_list.append(item)
    for i in range(seasons):
        for j in range(1, seasons_list[i][0]+1):
            time += seasons_list[i][j]
        time -= (intro_song[i])*(seasons_list[i][0]-1)
    print(time)