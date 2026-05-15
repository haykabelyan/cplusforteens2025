nums = [10,4,8,3]

leftSum = []
rightSum = []

leftSum.append(0)

l = 0
for i in range(0, len(nums)-1):
    l += nums[i]
    leftSum.append(l) 

r = 0
for i in range(len(nums)-1, 0, -1):
    r += nums[i]
    rightSum.append(r)

rightSum.reverse()
rightSum.append(0)

ans = []
for i in range(0, len(nums)):
    ans.append(abs(leftSum[i] - rightSum[i]))

print(ans)