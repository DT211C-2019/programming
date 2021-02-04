def remove_even(list):
    for i in list:
        if i % 2 == 0:
            list.remove(i)
    return list

def remove_odd(list):
    for i in list:
        if i % 2 != 0:
            list.remove(i)
    return list

def remove_odd_or_even(list, option):
    if option == 0:
        for i in list:
            if i % 2 == 0:
                list.remove(i)
        return list
    
    elif option == 1:
        for i in list:
            if i % 2 != 0:
                list.remove(i)
        return list

    else:
        return 0

print(remove_even([1,2,3,4,5,6]))
print(remove_odd([1,2,3,4,5,6]))