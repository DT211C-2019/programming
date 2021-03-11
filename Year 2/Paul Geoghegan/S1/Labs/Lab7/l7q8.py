
#This gets an input from the user
str = input("Please enter a string:\n")

#Creates a blank string
str_incrypt = ""

#This loop will incrypt the string
for i in range(0, len(str)):
	str_incrypt += chr(ord(str[i])+1)

#prints strings
print("The unincrypted string is:" + str)
print("The incrypted string is:" + str_incrypt)
