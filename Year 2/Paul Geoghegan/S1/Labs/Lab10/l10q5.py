
def get_even(list):
	"""This makes a new list with only the even elements from the original list"""

	even_list = []

	#Loops through list
	for i in range(0, len(list)):
		#Checks if element at index is even
		if list[i]%2 == 0:
			#Appends numbers
			even_list.append(list[i])

	#returns new list
	return even_list

#Main
list = [1, 2, 3, 4, 5, 6, 7, 8, 43, 12, 4]
even_list = get_even(list)
print(even_list)