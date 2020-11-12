
three_list = []

#finds all the numbers containing threes from 1 to 1000
for i in range(1, 1000):
	#Checks if number contains a 3
	if '3' in str(i):
		#Adds number to list
		three_list.append(i)

#prints list
print(three_list)