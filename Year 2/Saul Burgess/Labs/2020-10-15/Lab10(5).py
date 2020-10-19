def odd_remover(list):
    '''When passed a list, this function will return a new list containing only
    even numbers'''

    new_list = [ ]
    for i in range(len(list)):
        if i % 2 != 0:
            new_list.append(list[i])

    return new_list

list = [1,2,3,4,5,6]
print(odd_remover(list))