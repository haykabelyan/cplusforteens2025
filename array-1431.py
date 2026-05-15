candies = [2,3,5,1,3]
extraCandies = 3
ans = []

for el in candies:
    if el + extraCandies >= max(candies):
        ans.append(True)
    else:
        ans.append(False)

print(ans)