nums = list(map(int, input().split()))
index = list(map(int, input().split()))
target = []

for i in range(len(nums)):
    target.insert(index[i], nums[i])

print(*target)