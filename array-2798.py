hours = [0,1,2,3,4]
target = 2

c = 0

for el in hours:
    if el >= target:
        c += 1
        
print(c)