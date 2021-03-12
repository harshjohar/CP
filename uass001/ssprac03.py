def min_elements(li, start):
    min=start
    start+=1
    while start<len(li):
        if li[start] < li[min]:
            min=start
        start+=1
    return min

def selection_sort(li):
    i=0
    while i<len(li)-1:
        min = min_elements(li, i)
        if i!= min:
            li[i], li[min] = li[min], li[i]
        i+=1
        print(*li)
    return li

n = int(input())
li = list(map(int, input().split()))
selection_sort(li)