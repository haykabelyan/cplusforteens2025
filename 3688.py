nums = list(map(int, input().split()))
ans = 0

for el in nums:
    if el % 2 == 0:
        ans |= el

print(ans)