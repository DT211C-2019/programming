list = [1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6]

checked = {}
duplicates = []

for i in list:
    if i not in checked:
        checked[i] = 1
    else:
        if checked[i] == 1:
            duplicates.append(i)
        checked[i] += 1

print (duplicates)