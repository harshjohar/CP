for _ in range(int(input())):
    n, m = map(int, input().split())
    done = list(map(int, input().split()))
    done.sort()
    numbers = []
    for i in range(1, n+1):
        numbers.append(i)
    for i in done:
        numbers.remove(i)
    # print(numbers)
    chef = []
    assistant = []
    for i in range(len(numbers)):
        if i%2 != 0:
            assistant.append(numbers[i])
        else:
            chef.append(numbers[i])
    print(*chef)
    print(*assistant)