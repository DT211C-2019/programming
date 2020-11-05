def mult_tuple (tuple):
    '''When past a two-value tuple, this function will multiply them'''

    if len(tuple) != 2:
        print("This tuple is too big.")
    else:
        try:
            calc = list(tuple)
            output = calc[0] * calc[1]
            return output
        except:
            print("Something has gone wrong! Please try again")

def add_tuple (tuple):
    '''When past a two-value tuple, this function will add them'''

    if len(tuple) != 2:
        print("This tuple is too big.")
    else:
        try:
            calc = list(tuple)
            output = calc[0] + calc[1]
            return output
        except:
            print("Something has gone wrong! Please try again")

tuple = (5, 6)
print("Added:", add_tuple(tuple), "Multiplied:", mult_tuple(tuple))