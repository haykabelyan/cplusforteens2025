nums = list(map(int, input().split()))
nums.sort()
ans = []

for i in range(1, len(nums),2):
    ans.append(nums[i])
    ans.append(nums[i-1])

print(*ans)
