
def get_first_half(str):
	"""returns the first half of a string"""

	#Gets new string
	new_str = str[0:int(len(str)/2)]
	return new_str

#Main
str = input("Please enter a string of even length:\n")
new_str = get_first_half(str)
print(new_str)