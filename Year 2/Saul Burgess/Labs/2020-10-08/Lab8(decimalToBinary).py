#Grabs user input 
user_input = int(input("Please enter a integer number: "))
div = user_input
binary = ''

if user_input == 0:
    print("This number is 0, the program will now quit.")

elif user_input < 0:
    print("This is a negeative number, the program will now quit.")

else:
    while div != 0:
        mod = div % 2
        binary += str(mod)
        div = int(div / 2)


#Due to the logic I used, it comes out reversed. This rectifies that. Any landing you can walk away from huh?
output=''
for i in binary:
    output = i + output

print("The Binary of", div, "is", output)