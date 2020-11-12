
#Creates list of tuples
list = [('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5')]
tup_temp = ()

#Sorts list
for i in range(len(list)-1):
	for j in range(i, len(list)):
		if list[i][1] < list[j][1]:
			#Stores i at tup_temp
			tup_temp = list[i]
			list[i] = list[j]
			list[j] = tup_temp

#Prints new list
print(list)