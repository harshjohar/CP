n = int(input())
lines = []
text = []

for i in range(n):
    line = input().lower()
    refined = line.replace(',', '')
    refined = refined.replace("'", '')
    refined = refined.replace('.', '')
    refined = refined.replace(';', '')
    refined = refined.replace(':', '')

    lines.append(refined.split())
    text = text+lines[i]

text = set(text)
text = list(text)
text.sort()

print(len(text))
# print(text)
for i in range(len(text)):
    print(text[i])