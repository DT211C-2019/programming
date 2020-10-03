#Grabs user values, then converts them to an int (except operator)
user_input_a = int(input("Please enter the first number: "))
user_input_operator = input("Please enter an operator: ")
user_input_b = int(input("Please enter the second number: "))

#Switch for handling operator
if user_input_operator == "+":
    print("The answer is: ", user_input_a + user_input_b)

elif user_input_operator == "-":
    print("The answer is: ", user_input_a - user_input_b)

elif user_input_operator == "*":
    print("The answer is: ", user_input_a * user_input_b)

elif user_input_operator == "/":
    print("The answer is: ", user_input_a / user_input_b)

else:
    print("An invalid operator was entered.")