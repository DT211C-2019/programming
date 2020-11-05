input = input("Please enter a string that contains spaces: ")
num = len([i for i in range(len(input)) if input.find(' ', i) == i])
print("This string has", num, "spaces in it.")