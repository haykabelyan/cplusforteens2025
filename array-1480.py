nums = [1, 2, 3, 4]
sum = []
acc = 0

for el in nums:
    acc += el
    sum.append(acc)
        
print(sum)