dict = {
    '0':6,'1':2, '2':5, '3':5, '4':4, '5':5, '6':6, '7':3, '8':7, '9':6
}

for _ in range(int(input())):
    a, b = map(int, input().split())
    c = a+b
    s = str(c)
    ans = 0
    for char in s:
        ans+=dict[char]
    print(ans)