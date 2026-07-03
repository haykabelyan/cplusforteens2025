nums = [1, 2, 2, 1]
k = 1
cnt = 0

for i in range(len(nums)):
    for j in range(i + 1, len(nums)):
        if abs(nums[i] - nums[j]) == k:
            cnt += 1

print(cnt)