nums = [2,1,3,5,6]
k = 5
multiplier = 2

while k > 0:

    mn = min(nums)
    mn_index = nums.index(mn)
    nums[mn_index] *= multiplier

    k-=1

print(nums)