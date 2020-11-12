
#Creates list
num_list = []

#Adds elements devisable by 7 to list
for i in range(1, 1000):
	#Checks if number is divisable by 7
	if i % 7 == 0:
		#Adds number to list
		num_list.append(i)

#prints list
print(num_list)
