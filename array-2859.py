nums = [5,10,1,5,2]
k = 1
sum = 0

for i in range(len(nums)):
    if bin(i).count('1') == k:
        sum += nums[i]

print(sum)