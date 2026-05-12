accounts = [[1,2,3],[3,2,1]]
max = 0

for tiv in accounts:
    sum = 0
    for i in range( len(tiv) ):
        sum += tiv[i]
    if max < sum:
        max = sum
print(max)