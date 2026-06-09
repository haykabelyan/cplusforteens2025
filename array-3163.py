nums1 = [1,3,4]
nums2 = [1,3,4]
k = 1
c = 0

for a in nums1:
    for b in nums2:
        if a % (b*k) == 0:
            c+=1

print(c)