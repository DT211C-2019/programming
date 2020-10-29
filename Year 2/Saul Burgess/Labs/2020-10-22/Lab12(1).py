user_input = 'ERROR: No variable set'
repeat = True

while repeat is True:    
    try:
        user_input = float(input("Input a floating-point number: "))
        repeat = False
    except:
        print("Warning! You have entered an invalid character. Try again")

print("Number is", user_input)