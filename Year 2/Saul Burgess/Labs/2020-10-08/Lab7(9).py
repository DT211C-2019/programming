import string

#Grabs user entry
user_input = input("Please enter a string you wish to check for palandromes: ")

#Makes it lowercase, removes punctuation, and removes whitespace
user_input = user_input.casefold().strip('.').replace(" ", "").replace("'", "")

#Compares strings
if list(user_input) == list(reversed(user_input)):
    print(user_input, "Is a palandrome")
else:
    print(user_input, "Is not a palandrome")