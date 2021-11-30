def max_dict(dic):
    ans = 0
    for i in dic:
        if ans<dic[i]:
            ans = dic[i]
    return ans
def get_key(val, my_dict):
    for key, value in my_dict.items():
         if val == value:
             return key
for _ in range(int(input())):
    s = input()
    dic = {}
    for char in s:
        if char in dic:
            dic[char] += 1
        else:
            dic[char]=1
    maxi = max_dict(dic)
    idx = get_key(maxi, dic)
    # print(maxi, idx)
    check = 0
    for char in dic:
        if char != idx:
            check+=dic[char]

    # print(dic)
    if maxi == check:
        print("YES")
    else:
        print("NO")