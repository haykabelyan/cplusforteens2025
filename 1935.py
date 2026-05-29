text = "hello world"
brokenLetters = "ad"

text_arr = text.split(" ") # ["hello", "world"]
count = 0
for word in text_arr:
    is_valid = True
    for letter in word:
        if letter in brokenLetters:
            is_valid = False
            break
    if is_valid:
        count += 1
print(count)