def string_printer_first_last_two_chars (string):
    """
    When passed a string, this function will return a string that is made up of
    the first two characters and the last two characters. If the string has a
    length of less then 4 the program will print an error message. 
    """

    if len(string) < 4:
        return 0
    
    size = len(string)
    string = list(string)

    string = ''.join(string[0] + string[1] + string[size-2] + string[size-1])
    return string



#Driver
user_input = input("Please enter a string: ")
output = string_printer_first_last_two_chars(user_input)

#Parses error return from the string
if output != 0:
    print(output)
else:
    print("You entered a string less then 4")