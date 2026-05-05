operations = ["--X","X++","X++"]
count = 0

for i in operations:
    if(i == "--X" or i == "X--"):
        count -= 1
    elif(i == "++X" or i == "X++"):
        count += 1

print(count)