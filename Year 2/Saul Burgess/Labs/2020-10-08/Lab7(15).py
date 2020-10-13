import random
output = ''

#Grabs user input, then converts to a list
user_input = input("Please enter a string: ")
user_input = list(user_input)

#Slightly more efficent swap method from my previous version
index = range(len(user_input))
index1, index2 = random.sample(index, 2)
user_input[index1], user_input[index2] = user_input[index2], user_input[index1]

#Outputs code
print(output.join(user_input))