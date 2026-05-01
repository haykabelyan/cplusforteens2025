s = input()
stack = []
for c in s:
    if c.isalpha():
        stack.append(c)
    elif c.isdigit():
            stack.pop()
            
print(''.join(stack))