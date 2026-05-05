nums = []
k = int(input())
sum = 0

for i in range(len(nums)):
    sum+= nums[i]

print(sum % k)