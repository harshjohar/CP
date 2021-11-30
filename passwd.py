t = int(input())
special = ['@', '#', '%', '&', '?']
for _ in range(t):
    ans = 'NO'
    l=u=n=s=0
    password = input()
    if len(password) >= 10:
        for i in range(len(password)):
            if password[i].islower():
                l=1
            if i>0 and i<len(password)-1:
                if password[i].isupper():
                    u=1
                if password[i].isdigit():
                    n=1
                if password[i] in special:
                    s=1
        if l==1 and u==1 and n==1 and s==1:
            ans='YES'
    print(ans)