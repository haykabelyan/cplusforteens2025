s = "a1c1e1"
s = list(s)
for i in range(1, len(s), 2):
  s[i] = chr( ord(s[i-1]) +  int(s[i]) )

print(s)