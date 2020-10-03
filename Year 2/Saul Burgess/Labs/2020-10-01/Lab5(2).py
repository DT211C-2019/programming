#Grabs user values, then converts them to an int
user_input_a = int(input("Please enter the first number: "))
user_input_b = int(input("Please enter the second number: "))

#Compares values
if user_input_a > user_input_b:
    print("Greater caught")

elif user_input_a == user_input_b:
    print("Equal caught")

else:
    print("Less caught")
