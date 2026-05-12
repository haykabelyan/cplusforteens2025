accounts = [[1,2,3],[3,2,1]]
ans = []

for tiv in accounts:
    ans.append(sum(tiv))
print(max(ans))