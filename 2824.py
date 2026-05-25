nums = list(map(int, input().split()))
target = int(input())

count = 0
for i in range(len(nums)):
    for j in range(i+1, len(nums)):
        if nums[i] + nums[j] < target:
            count+=1

print(count)