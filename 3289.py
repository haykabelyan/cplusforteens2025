nums = [0,1,1,0]
ans = []

for i in range(len(nums)):
    for j in range(i+1, len(nums)):
        if nums[i] == nums[j]:
            ans.append(nums[i])
print(ans)