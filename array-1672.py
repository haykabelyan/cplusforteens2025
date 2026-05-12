accounts = [[1,2,3],[3,2,1]]
res = []

for account in accounts:
    res.append(sum(account))

print(max(res))