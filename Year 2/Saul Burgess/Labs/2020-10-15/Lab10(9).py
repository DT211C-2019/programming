listA = [1,2,3,4,5,6]
listB = [10,9,8,7,6]
bool = 0

for i in range(len(listA)):
    for j in range(len(listB)):
        if listA[i] == listB[j]:
            bool = 1

if bool == 1:
    print("Comparison is True")
else:
    print("Comparison is False")