nums = {2, 11, 10, 1, 3}
k = 10
count = 0

for el in nums:
    if el < k:
        count += 1

print(count)