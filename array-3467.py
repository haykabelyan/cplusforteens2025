nums = [4,3,2,1]
result = []

for el in nums:
    if el%2 == 0:
        result.append(0)
    else:
        result.append(1)

print(sorted(result))