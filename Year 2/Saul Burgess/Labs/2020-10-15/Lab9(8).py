def string_give_first_half (string):
    """
    When given a string, this will return the first half of the string 
    """

    size = len(string)
    string = list(string)
    new_string = ''

    for i in range(0, round(size/2)):
        new_string += string[i]

    return new_string


user_input = input("Please enter a string: ")
output = string_give_first_half(user_input)
print(output)