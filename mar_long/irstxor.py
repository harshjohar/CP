t = int(input())
for _ in range(t):
    c = int(input())
    tmp = c
    # change 'c' into binary
    ones = 0 # no. of 1 in its binary
    length = 0 # length of 'c' in binary

    # changing into binary

    while tmp >0:
        if tmp%2==1:
            ones+=1
        tmp//=2
        length+=1

    # req: a*b max
    # both should be max
    # iterate over c 
    # if the bit is 0, put 1 in both a and b    # 1 xor 1 = 0
    # if it is 1, put 1 in one and 0 in other
    # if first bit a=of one is 1, thena ll other 1's to be shifted to the other

    a=[]
    b=[]
    temp = length
    tmp = c

    while tmp>0:
        if tmp%2==0:
            a.append(1)
            b.append(1)
        
        else:
            if ones == 1:   # last bit will be stored in a
                a.append(1)
                b.append(0)
            else:
                a.append(0)
                b.append(1)
            ones-=1
        
        tmp//=2
    
    # actual numbers
    A=0
    B=0

    m=1 # multiple of 2
    for i in range(temp):
        A+=m*a[i]
        B+=m*b[i]
        m*=2
    
    print(A*B)