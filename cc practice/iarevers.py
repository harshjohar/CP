n = int(input())
lines = []

for i in range(n):
    line = input()
    refined = line.replace(',', '')
    refined = refined.replace("'", '')
    refined = refined.replace('.', '')
    refined = refined.replace(';', '')
    refined = refined.replace(':', '')

    lines.append(refined.split())

for i in range(n-1, -1, -1):
    for j in range(len(lines[i])-1, -1, -1):
        print(lines[i][j], end=' ')
    print()