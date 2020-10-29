
list = [1, 2, 2, 3, 4, 4, 43, 34, 34]
i = j = 0

#loops through list
while i < len(list)-1:
	j = i+1
	#Loops through list to remove elements
	while j < len(list):
		#Checks if element already exists
		if list[i] == list[j]:
			#Removes element
			list.pop(j)
		else:
			j+=1
	i+=1


#prints new list
print(list)
