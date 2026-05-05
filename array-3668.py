order = [3,1,2,5,4]
friends = [1,3,4]
res = []

for el in order:
    if el in friends:
        res.append(el)
print(res)