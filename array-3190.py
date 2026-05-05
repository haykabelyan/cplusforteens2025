nums = [1,2,3,4]
cnt = 0

for el in nums:
    if(el % 3 != 0):
        cnt += 1

print(cnt)