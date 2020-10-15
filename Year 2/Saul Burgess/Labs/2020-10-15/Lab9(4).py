def number_printer_sum_of_range (max):
    """When passed a number, this program will add 1 + any number between 1 and the input"""
    output = sum(range(1,max+1))
    print("The sume of numbers from 1 to", max, "is", output)

#Driver
user_input = int(input("Please enter a number: "))
number_printer_sum_of_range(user_input)