#Grabs user values, then converts them to an int
user_input_a = int(input("Please enter the first number: "))
user_input_b = int(input("Please enter the second number: "))
user_input_c = int(input("Please enter the third number: "))

#Does greater/less then, then prints
if user_input_a < user_input_b:
    tmp = user_input_b
else:
    tmp = user_input_a

if tmp < user_input_c:
    print("The largest value is ", user_input_c)
else:
    print("The largest value is ", tmp)