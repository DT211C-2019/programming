def number_printer_odd_or_even (max):
    """When passed a number, this function will iterate from 0-Input while also displaying if the number is odd or even"""
    for i in range(0, max+1):
        if i % 2 > 0:
            print(i, "Is odd")
        else:
            print(i, "Is even")

#Driver
user_input = int(input("Please enter a number: "))
number_printer_odd_or_even(user_input)