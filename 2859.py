nums = list(map(int, input().split()))
k = int(input())
sum = 0

for i in range(len(nums)):
    if bin(i).count('1') == k: #
        sum += nums[i]
    
print(sum)
