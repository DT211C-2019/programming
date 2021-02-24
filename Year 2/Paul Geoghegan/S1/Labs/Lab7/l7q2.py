
#Sets length to 0
length = 0

#Gets a string from the user
str = input("Please enter a string:\n")

#Lets the user know that we are getting the length of there string
print("Getting length of", str)

#Gets length of string
for i in str:
	length+=1

print("The length of your string is:", length)