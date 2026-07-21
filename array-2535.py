nums = [1,15,6,3]
element = 0
digit = 0

element = sum(nums)

for el in nums:
    temp = el
    while(temp>0):
        digit += temp % 10
        temp //= 10

print(abs(element - digit))