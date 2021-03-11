import string

#This gets an input from the user
str = input("Please enter a string:\n")

#Makes sure all characters are lower case
str_temp = str.lower()

#Stores bad characters
bad_chars = string.whitespace + string.punctuation

#removes all unwanted characters
for i in range(0, len(bad_chars)):
	#removes the characters
	str_temp = str_temp.replace(bad_chars[i], " ")

#Gets a reversed string
str_temp_reversed = str_temp[::-1]

if str_temp == str_temp_reversed:
	print("Yes! the string is a palindrome")
else:
	print("Sorry that string is not a palindrome")
