
#Gets a binary input as a string
bin_temp = input("Please enter a binary number:\n")

bin_num = 0

#This reverses the binary string
bin_str = bin_temp[::-1]

#Does conversion character by character
for i in range(0, len(bin_str)):

	#Does conversion to int
	bin_num += 2**i * int(bin_str[i])

#Prints out intager
print(bin_num)
