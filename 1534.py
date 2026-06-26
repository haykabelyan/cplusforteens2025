arr = list(map(int, input().split()))
a = int(input())
b = int(input())
c = int(input())
count = 0

for i in range (0, len(arr)-2):
    for j in range (i+1, len(arr)-1):
        for k in range (j+1, len(arr)):
            if abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:
                count+=1

print(count)