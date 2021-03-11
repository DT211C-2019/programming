
def string_change(str):
	"""This will make a new string made up of the first and last 2 characters of a string"""

	#Checks length of string
	if len(str) < 4:
		print("Sorry this string is to short")
	else:
		new_str = str[:2]+str[-2:]
		return new_str

#Main
str = input("Please enter a string:\n")
new_str = string_change(str)
print(new_str)