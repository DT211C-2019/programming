def number_printer (max):
    """When passed a number, will count then print that number from 1 - Input"""
    for i in range(1, max+1):
        print(i)

#Driver
user_input = int(input("Please enter a number: "))
number_printer(user_input)