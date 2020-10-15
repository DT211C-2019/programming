def string_add_message_middle (string, message):
    """
    When given a string, this will add a chosen message in the middle of the
    string
    """

    size = len(string)
    string = list(string)
    new_string = ''

    for i in range(0, round(size/2)):
        new_string += string[i]

    new_string += message

    for i in range(round(size/2), size):
        new_string += string[i]
    
    return new_string


user_input = input("Please enter a string: ")
user_inputB = input("Please enter a message to be inserted into the middle: ")
output = string_add_message_middle(user_input, user_inputB)
print(output)