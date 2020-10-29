
def str_remove(str, index1, index2):
	"""Removes part of the string between the 2 indexes"""

	#makes new string
	new_str = str[:index1] + str[index2:]
	return new_str

#main
str = input("Please enter a string:\n")
index1 = int(input("Please enter the first index:\n"))
index2 = int(input("Please enter a second index:\n"))

#Checks which index is larger
if index1 > index2:
	temp = index1
	index1 = index2
	index2 = temp

#Removes part of string
new_str = str_remove(str, index1, index2)
print(new_str)