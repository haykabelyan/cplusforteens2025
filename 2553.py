nums = list(map(int, input().split()))
ans = []
for num in nums:
    for char in str(num):
        ans.append(int(char))

print(*ans)