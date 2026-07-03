nums = [3, 0, 1, 1, 9, 7]
a = 7
b = 2
c = 3

count = 0

for i in range(len(nums)):
    for j in range(i + 1, len(nums)):
        for k in range(j + 1, len(nums)):
            if (abs(nums[i] - nums[j]) <= a and abs(nums[j] - nums[k]) <= b and abs(nums[i] - nums[k]) <= c):
                count += 1

print(count)