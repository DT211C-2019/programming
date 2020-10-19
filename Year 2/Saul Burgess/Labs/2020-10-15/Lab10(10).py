def difference(difA, difB):
    '''When passed a list this function will return a list containing the
    difference between both strings'''

    diff = [i for i in difA + difB if i not in difA or i not in difB]
    return diff

list1 = [10, 9, 8, 7, 6]
list2 = [1, 2, 3, 4, 5, 6]

output = difference(list2, list1)

print(output)