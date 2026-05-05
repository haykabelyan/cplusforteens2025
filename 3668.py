order = list(map(int, input().split()))
friends = list(map(int, input().split()))

res = []

for el in order:
    if el in friends:
        res.append(el)

print(res)