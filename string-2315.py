s = "l|*e*et|c**o|*de|"
count1 = 0
count = 0

for i in s:
    if i == '|':
        count1 += 1
    elif i == '*' and count1 % 2 == 0:
        count += 1

print(count)
    