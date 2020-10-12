import random
output = ''

#Grabs user input, then converts to a list
user_input = input("Please enter a string: ")
user_input = list(user_input)

#Swaps random elements of the list
user_input[random.randint(0, len(user_input)-1)] = user_input[random.randint(0, len(user_input)-1)]

#Converts result back to a string, then prints
print(output.join(user_input))