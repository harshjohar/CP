n=int(input())
arr=list(map(int,input().split()))
    
temp = [0]*(5000000)
    
for i in arr:
    temp[i] +=1
        
    
length = len(arr)
i = 0
    
while length > 0 and i <len(temp):
    if temp[i] ==0:
        pass
    else:
        print(length)
        length -=temp[i]
        
    i+=1