nums = list(map(int, input().split()))
res = []

for i in range(0,len(nums), 2):
    for j in range(nums[i]):
        res.append(nums[i+1])

print(res)