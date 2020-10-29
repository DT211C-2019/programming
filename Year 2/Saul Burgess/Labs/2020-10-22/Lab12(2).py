def safe_input (prompt, type):
    '''
    Safe input, when passed a string and a datatype "str", "int", "float", and a
    variable. This function will then return that variable converted into one of
    the specified datatypes. If it fails to do this, it will return an empty
    string. 
    '''

    safe_prompt = ''

    try:
        if type == 'str':
            safe_prompt = str(prompt)
        if type == 'int':
            safe_prompt = int(prompt)
        if type == 'float':
            safe_prompt = float(prompt)
    except:
        safe_prompt = ''

    return safe_prompt



#Grabs str
while True:
    user_input_str = safe_input(input("Please enter a string: "), 'str')
    if user_input_str != '':
        break

print("The string you entered is: ", user_input_str)

#Grabs int
while True:
    user_input_int = safe_input(input("Please enter a int: "), 'int')
    if user_input_int != '':
        break

print("The int you entered is: ", user_input_int)

#Grabs float
while True:
    user_input_float = safe_input(input("Please enter a float: "), 'float')
    if user_input_float != '':
        break

print("The float you entered is: ", user_input_float)
