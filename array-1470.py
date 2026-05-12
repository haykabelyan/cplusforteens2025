nums = input()
n = input()
ans = []

for i in range(n):
    ans.append(nums[i])
    ans.append(nums[i + n])

print(ans)