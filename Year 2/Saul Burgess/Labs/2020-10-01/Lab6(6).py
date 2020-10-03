cont = 1

while cont == 1:
    user_input = int(input("Please enter a number: "))
    if user_input <= -1:
        print("You have entered", user_input, "this is a negative number and the program will now end.")
        cont = 0
    else:
        print("The number you entered was: ", user_input)
