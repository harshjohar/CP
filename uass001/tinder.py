for _ in range(int(input())):
    n = int(input())
    s = input()
    count_male = 0
    count_female = 0
    count = 0
    for i in range(n):
        if s[i] == 'M':
            count_male+=1
        else:
            count_female+=1
        
        if count_female == count_male:
            count+=1
            count_male=0
            count_female=0
    print(count)
