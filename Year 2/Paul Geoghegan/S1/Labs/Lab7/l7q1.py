
#This gets a string from the user
str = input("Please enter a string:\n")

#This lets the user know that there string will be printed
print("This will print your string", str, "with each character on a different line")

#This prints the string with each character on a different line
for i in range(0, len(str)):
	print(str[i])
