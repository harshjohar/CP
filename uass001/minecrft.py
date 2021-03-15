def find_indexes(height,n,m,mon):
    lo= 0
    hi=  n-1
    possible_i=n-1
    while(lo<=hi):
        mid= lo + (hi-lo)//2
        if mon[mid][0]==height:
            print(mid , '0')
            return
        elif mon[mid][0]< height:
            possible_i=mid
            lo=mid+1
        else:
            hi= mid-1

    for j in range(0,m):
        if mon[possible_i][j]==height:
            print(possible_i, j)
            return


def find_ind_temp(height,n,m,mon):
    for i in range(n):
        for j in range(m):
            if mon[i][j]==height:
                print(i,j)
                return




t=int(input())
while t>0:
    n,m,q= [int(x) for x in input().split()]
    mon=[]
    for i in range(n):
        li= list(map(int, input().split()))
        mon.append(li)
    for y in range(0,q):
        height= int(input())
        find_indexes(height,n,m,mon)

    t-=1

