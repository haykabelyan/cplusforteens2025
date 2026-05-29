nums = [8,1,2,2,3]
count = []

for i in range(len(nums)):
            count1 = 0
            for j in range(len(nums)):
                if nums[j] < nums[i]:
                    count1 += 1

            count.append(count1)

print(count)

