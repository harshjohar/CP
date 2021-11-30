# maths OP
for _ in range(int(input())):
    a,b = map(int, input().split())

    x = ((a+b) - (a**2 + b**2 - a*b)**0.5)/3
    x = round(x)
    volume = x*(a-x)*(b-x)
    print(x, volume)