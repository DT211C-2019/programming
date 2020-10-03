#Grabs user values, then converts them to an int
user_input = int(input("Please enter your grade (between 0 and 100): "))

#Checks if the input is above or below 40%, then informs the user whether it is a pass or fail
if user_input >= 40:
    print("You passed")
else:
    print("You failed")
