nums1 = [1,3,4] 
nums2 = [1,3,4] 
k = 1
count = 0
    
    
for el in nums1:
    for le in nums2:
        if el % (le * k) == 0:
            count+=1
     
print(count)