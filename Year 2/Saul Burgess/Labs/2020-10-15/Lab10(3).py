def o_counter(list):
    '''When passed a string, this function will check if they begin with o and
    return the result.'''
    count = 0
    for i in list:
        if i[0] == 'O':
            count += 1
    return count

list = ['Always','Look','On','The', 'Bright', 'Side', 'Of', 'Life']
print("The amount of O's starting in these words is", o_counter(list))