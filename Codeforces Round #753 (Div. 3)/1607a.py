for _ in range(int(input())):
    keyboard = input()
    word = input()
 
    ans=0
 
    prev=keyboard.index(word[0])
    for ch in word:
        for i in range(26):
            if keyboard[i]==ch:
                ans+=abs(i-prev)
                prev=i
    print(ans)