res = []

nums = [1,2,3,4]
for i in range(len(nums), 2):
    for j in range(nums[i]):
        res.append(nums[i+1])
        
print(res)