encoded = list(map(int, input().split()))

first = int(input())
arr = [first]

for num in encoded:
    arr.append(arr[-1] ^ num)

print(arr)