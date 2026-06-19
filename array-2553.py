nums = [13,25,83,77]
ans = []

for num in nums:
    for char in str(num):
        ans.append(int(char))
        
print(ans)