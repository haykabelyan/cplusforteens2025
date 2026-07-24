nums = list(map(int, input().split()))
ans = []

for num in nums:
    found = -1

    for x in range(num+1):
        if x | x+1 == num:
            found = x 
            break
    ans.append(found)
print(ans)