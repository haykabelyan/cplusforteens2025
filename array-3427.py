nums = [2,3,1]
n = len(nums)
s = 0

for i in range(n):
    start = max(0, i - nums[i])
    end = i + 1
    s += sum(nums[start:end])
    
print(s)