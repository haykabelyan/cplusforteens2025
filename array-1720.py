encoded = [1,2,3]
first = 1
decoded = [first]

for i in range(0, len(encoded)):
            decoded.append(decoded[i] ^ encoded[i])

print(decoded)