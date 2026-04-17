s = input()
flag = 0
cnt = 0

for ch in s:
    if ch == '|':
        flag += 1

    if ch == '*' and flag % 2 == 0:
        cnt += 1

return cnt