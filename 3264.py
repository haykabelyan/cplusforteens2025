nums = list(map(int, input().split()))
k = int(input())
multiplier = int(input())

for i in range(k):
    mn = min(nums)
    for j in range(len(nums)):
        if nums[j] == mn:
            nums[j] *= multiplier
            break

print(*nums)