def string_remove_chunk (string, rmstart, rmend):
    """
    When given a string, this function will remove a chosen chunk from the
    string
    """

    size = len(string)
    string = list(string)
    new_string = ''

    for i in range(0, size):
        if i not in range(rmstart, rmend+1):
            new_string += string[i]

    return new_string


string_input = input("Please enter a string: ")
rmstart = int(input("When in the string do you want to start removal?: " ))
rmend = int(input("When in the string do you want to end removal?: "))

output = string_remove_chunk(string_input, rmstart, rmend)

print("The new string is:", output)