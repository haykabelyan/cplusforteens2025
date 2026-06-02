n = int(input())

points = []
for _ in range(n):
    points.append(list(map(int, input().split())))

x = []

for point in points:
    x.append(point[0])

x.sort()

mx = 0
for i in range(1, len(x)):
    mx = max(mx, x[i] - x[i-1])

print(mx)