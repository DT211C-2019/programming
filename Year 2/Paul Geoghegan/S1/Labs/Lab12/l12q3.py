
def prompt_open(file_name, file_mode):
	"""This will attempt to open a file in a specified mode"""

	if file_mode.lower() != "r" and file_mode.lower() != "w":
		print("That is not a mode the file can be opened in")
		return "-1"

	try:
		file = open(file_name, file_mode)
		return file
	except:
		print("Sorry that's not a valid file")
		return "-1"


#Main
file = "-1"

while file == "-1":
	file = prompt_open(input("Please enter the name of the file"), input("Please enter either r or w for read or write respectivley"))

print("Opened file")
