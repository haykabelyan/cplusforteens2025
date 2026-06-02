points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]

x = []

for point in points:
   x.append(point[0])

x.sort()

mx = 0
for i in range(1, len(x)):
    mx = max(mx,  x[i] - x[i-1])

print(mx)