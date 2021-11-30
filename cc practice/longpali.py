n = int(input())
w = input()
for i in range(n,0,-1) :
	for j in range(n -i +1) :
		a = w [j: i + j ]
		if a[::-1] == a :
			print(len(a))
			print(a)
			exit()

