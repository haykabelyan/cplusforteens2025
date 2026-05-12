nums = [2,5,1,3,4,7]
n = 3

result = []
for i in range(n):
    result.append(nums[i])
    result.append(nums[n+i])
print(result)