def number_printer_multiply_by_nine (max):
    """When passed a number, will count then print that number from 1 - Input it will also multiply that number by 9 and print the result"""
    for i in range(0, max+1):
        print(i, "Multiplied by 9 is", i*9)

#Driver
user_input = int(input("Please enter a number: "))
number_printer_multiply_by_nine(user_input)