
str_temp = input("Please enter a an intager:\n")
bin_num = int(str_temp)
bin_str = ""

#Checks if this input is valid
if bin_num == 0:
	print("The answer is 0")
elif bin_num < 0:
	print("This number is < 0 so can not be converted")
else:
	#This will get the list of remainders using the % operator
	while bin_num > 0:
		bin_str = str(bin_num%2)+bin_str
		bin_num = int(bin_num / 2)

	#Prints out the binary string
	print(bin_str)
