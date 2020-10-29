
#Gets a string from the user
str_forward = input("Please enter a string:\n")

#Creates a blank string
str_backwards = ""

for i in str_forward:
	str_backwards = i + str_backwards

#Prints strings
print("The original string was:" + str_forward)
print("The string backwards is:" + str_backwards)
