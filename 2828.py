words = ["alice","bob","charlie"]
s = "abc"

res = ""
for el in words:
    res += el[0]

print(res == s)