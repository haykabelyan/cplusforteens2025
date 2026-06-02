nums = [1,2,3,4]
ans = []
for i in range(len(nums)):
    sum = 0
    for j in range(i+1):
        sum += nums[j]
    ans.append(sum)
print(ans)