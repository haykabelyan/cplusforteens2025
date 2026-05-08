nums = [0,1,1,0]
ans = []

for el in nums:
    if nums.count(el) > 1 and el not in ans:
        ans.append(el)
print(ans)