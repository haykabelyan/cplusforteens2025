nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
n = len(nums)
s = 0

for i in range(n):
    start = max(0, i - nums[i])
    end = i+1
    s += sum(nums[start:end])
print(s)