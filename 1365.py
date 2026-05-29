nums = [8,1,2,2,3]
ans = []
for i in range(len(nums)):
    sm = 0
    for j in range(len(nums)):
        if nums[i] > nums[j]:
            sm += 1
    ans.append(sm)
print(ans)