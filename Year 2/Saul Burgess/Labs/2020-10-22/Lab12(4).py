#Grabs user values
user_input1 = input("Please enter your first number: ")
user_input2 = input("Please enter your second number: ")
user_input3 = input("Please enter your third number: ")

#Tries to convert these to ints
try:
    user_input1 = int(user_input1)
    user_input2 = int(user_input2)
    user_input3 = int(user_input3)
except:
    print("oops! You entered a string, or some other datatype other then int!")

#Does calcuation
output = None
try:
    output = user_input3 + (user_input1 / user_input2)
except ValueError:
    print("A ValueError has been thrown")
except ZeroDivisionError:
    print("A ZeroDivisionError has been thrown")
except:
    print("An unspecificed error has been thrown")

#Prints result
print("The answer is: ", output)