user_input = input("Please enter the string you want to encrypt: ")

encrypted_user_input = ""
for i in range(len(user_input)):
    encrypted_user_input += chr(ord(user_input[i])+1)

print("The encrypted string is:", encrypted_user_input)