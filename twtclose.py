def count_open_tweets(tweets):
    count=0
    for i in range(len(tweets)):
        if tweets[i]==1:
            count+=1
    return count

def toggle(tweets, index):
    if tweets[index] == 0:
        tweets[index] = 1
    else:
        tweets[index] = 0

n, k = map(int, input().split())
tweets = [0]*n

for i in range(k):
    action = input().split()
    # print(action)
    if len(action) == 1:
        tweets = [0]*n
        print(count_open_tweets(tweets))
    else:
        index = int(action[1])-1
        toggle(tweets, index)
        print(count_open_tweets(tweets))