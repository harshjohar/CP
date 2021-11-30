for _ in range(int(input())):
    exp = input()
    ans = ''
    signs = []
    for i in range(len(exp)):
        if exp[i].isalpha():
            ans+=exp[i]
        else:
            if exp[i] != '(' and exp[i] != ')':
                signs.append(exp[i])
            if exp[i] == ')':
                ans+=signs[-1]
                signs.pop()
    print(ans)
