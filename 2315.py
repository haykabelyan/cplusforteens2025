flag = 0
count = 0
s = "l|*e*et|c**o|*de|"
for i in range( len(s) ):
        if s[i] == '|':
            flag+=1

        if s[i] == '*' and flag % 2 == 0:
            count+=1

print(count)