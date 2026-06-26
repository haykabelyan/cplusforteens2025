nums = [5,4,2,3]
nums.sort()
ans = []

for i in range(1, len(nums), 2):
    ans.append(nums[i])
    ans.append(nums[i-1])

print(ans)