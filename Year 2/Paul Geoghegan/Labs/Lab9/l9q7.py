
def remove_odd(str):
	"""This function removes all characters at an uneven index"""
	new_str = str[1::2]
	return new_str

#Main
str = input("Please enter a string:\n")
new_str = remove_odd(str)
print(new_str)