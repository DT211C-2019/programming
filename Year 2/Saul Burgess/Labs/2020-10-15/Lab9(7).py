def string_remove_char_with_odd_index (string):
    """
    When given a string, this function will remove all chars with an odd index 
    """

    size = len(string)
    string = list(string)
    new_string = ''

    for i in range(0, size):
        string[i] = ord(string[i])

        if string[i] % 2 == 0:
            new_string += chr(string[i])

    return new_string


user_input = input("Please enter a string: ")
output = string_remove_char_with_odd_index(user_input)
print(output)