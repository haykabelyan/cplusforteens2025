points = [[8,7],[9,9],[7,4],[9,7]]
ans = []

for i in range( len(points) ):
    ans.append(points[i][0])

ans.sort()

mx = 0

for i in range(1, len(ans)):
    mx = max(mx,ans[i] - ans[i-1])

print(mx)