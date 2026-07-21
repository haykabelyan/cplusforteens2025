nums = list(map(int, input().split()))
elsum = sum(nums)
digsum = 0

for i in range(len(nums)):
    while nums[i] > 0:
        digsum+= nums[i]%10
        nums[i]//=10

print(abs(elsum - digsum))

