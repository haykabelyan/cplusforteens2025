nums = list(map(int, input().split()))
ans = []
for i in range(len(nums)):
    count = 0
    for j in range(len(nums)):
        if nums[i] > nums[j]:
            count += 1
    ans.append(count)
print(ans)