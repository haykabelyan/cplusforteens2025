accounts = [[1,2,3],[3,2,1]]
ans = []

for account in accounts:
    ans.append(sum(account))

print(max(ans))