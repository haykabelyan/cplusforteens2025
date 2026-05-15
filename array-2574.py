nums = [10,4,8,3]

leftSum = []
rightSum = []

leftSum.append(0)

s = 0
for i in range(0, len(nums)-1):
    s += nums[i]
    leftSum.append(s) 

s = 0
for i in range(len(nums)-1, 0, -1):
    s += nums[i]
    rightSum.append(s)

rightSum.reverse()
rightSum.append(0)

ans = []
for i in range(0, len(nums)):
    ans.append(abs(leftSum[i] - rightSum[i]))

print(ans)