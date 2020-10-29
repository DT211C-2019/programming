
def insert_str(str, insert):
	"""Inserts {{insert}} in to the middle of {{str}}"""

	#Makes new string
	new_str = str[0:int(len(str)/2)] + insert + str[int(len(str)/2):]
	return new_str

#Main
str = input("Please enter a string:\n")
insert = input("Please enter a string to insert:\n")
new_str = insert_str(str, insert)
print(new_str)