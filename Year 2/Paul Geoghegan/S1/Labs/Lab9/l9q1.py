
def printing_num(num):
	"""This function prints all the numbers up to the argument passed to this function"""
	for i in range(1, num+1):
		print(i)

#main
num = int(input("Please enter a number:\n"))
printing_num(num)
