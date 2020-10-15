def number_printer_factorial (max):
    """When passed a number, this function will print a factorial of that number"""

    factorial=1
    for i in range (1, max+1):
        factorial *= i

    print("The factorial of", max, "is", factorial)

#Driver
user_input = int(input("Please enter a number: "))
number_printer_factorial(user_input)