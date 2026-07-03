nums = [0,1,4,6,7,10]
diff = 3
count = 0

for i in range(0, len(nums)-2):
    for j in range(i+1, len(nums)-1):
        for z in range(j+1, len(nums)):
            if nums[j] - nums[i] == diff and nums[z] - nums[j] == diff:
                count+=1
print(count)