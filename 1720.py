encoded = [1,2,3]
first = 1
decoded = [first]

for el in encoded:
    decoded.append(decoded[-1] ^ el)
print(decoded)