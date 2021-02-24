
#Gets a string from the user
str = input("Please enter a string:\n")

#Checks if the string is long enough
if len(str) < 4:
	#Lets the user know the string is to long
	print("That string is to short please try again...")
else:
	#Prints the first and last 2 characters of the string
	print(str[:2], str[len(str)-2:])