n = int(input())
nums = list(map(int, input().split()))

for i in range(1, n):
    nums[i] += nums[i - 1]

print(nums)