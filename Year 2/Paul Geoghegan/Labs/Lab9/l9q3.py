
def print_multiply(num):
	"""This function takes the num and all numbers befor it, multiplies them by 9 and prints them"""
	for i in range(0, num+1):
		print(i, "* 9 =", i*9)

#Main
num = int(input("Please enter a number:\n"))
print_multiply(num)