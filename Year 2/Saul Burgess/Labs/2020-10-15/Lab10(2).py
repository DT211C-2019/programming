def largest(list):
    '''Returns the largest number from a list'''
    largest=0
    for i in list:
        if largest < i:
            largest=i
    return largest

list = [1,2,3,4,5,6]
print("The largest number in the list is", largest(list))