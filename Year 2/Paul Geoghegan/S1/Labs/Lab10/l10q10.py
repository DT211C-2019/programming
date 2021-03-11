
def check_elements(list1, list2):
	"""Checks if the 2 lists have any elements in common"""

	#Creates new_list and bool
	new_list = []
	check = "false"

	#Keeps track of the index for list1
	for i in range(len(list1)):
		#Keeps track of the index for list2
		for j in range(len(list2)):
			#Checks if element is the same
			if list1[i] == list2[j]:
				#Sets check to true
				check = "true"

		#Checks the value of check
		if check == "false":
			new_list.append(list1[i])
		else:
			#Changes check back to false
			check = "false"

	#Returns the list of the difference
	return new_list

#Main
list1 = [1, 2, 3, 4, 5, 6]
list2 = [10, 9, 8, 7, 6]
print(check_elements(list1, list2))
print(check_elements(list2, list1))
