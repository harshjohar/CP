for _ in range(int(input())):
    jewel = input()
    jewel_list = list(jewel)
    # jewel_set = set(jewel_list)
    stone = input()
    stone_list = list(stone)
    # stone_set = set(stone_list)
    # count = len(stone_set.intersection(jewel_set))
    count = 0
    for i in stone_list:
        if i in jewel_list:
            count+=1
    print(count)