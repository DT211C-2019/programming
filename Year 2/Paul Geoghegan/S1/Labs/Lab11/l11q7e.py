
#Gets input from the user
string = input("Please enter a string:\n")
count = 0

#Finds amount of spaces in the string
for i in range(len(string)):
	#Checks if current character is a space
	if string[i] == " ":
		count+=1

#prints number of spaces
print("There were", count, "spaces")