#Grabs user input
user_input = int(input("Please enter a binary number: "))

copy_user_input = user_input
output, i = 0, 0
while(user_input != 0):
    decimal = user_input % 10
    output = output + decimal * pow(2, i)
    user_input = user_input//10
    i+=1
print(output)
