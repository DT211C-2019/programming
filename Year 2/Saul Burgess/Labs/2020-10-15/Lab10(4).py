def o_counter(list, check):
    '''When passed a string, this function will check if they begin with check
    and return the result.'''
    count = 0
    for i in list:
        if i[0] == check:
            count += 1
    return count

checker = input("What character do you want to check for?: ")
list = ['Always','Look','On','The', 'Bright', 'Side', 'Of', 'Life']
print("The amount of O's starting in these words is", o_counter(list, checker))