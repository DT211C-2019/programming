
def check_elements(list1, list2):
	"""Checks if the 2 lists have any elements in common"""

	#Keeps track of the index for list1
	for i in range(len(list1)):
		#Keeps track of the index for list2
		for j in range(len(list2)):
			#Checks if element is the same
			if list1[i] == list2[j]:
				#Returns true
				return "true"
	#Returns false if they have no elements in common
	return "false"

#Main
list1 = [1, 2, 3, 4, 5, 6]
list2 = [10, 9, 8, 7, 6]
print(check_elements(list1, list2))
