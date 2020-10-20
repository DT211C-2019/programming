
def find_fact(num):
	"""This finds the factorial of num"""
	fact = 1

	#Finds factorial
	for i in range(1, num+1):
		fact *=i

	#Prints factorial
	print("The factorial of", i, "is", fact)

#Main
num = int(input("Please enter a number:\n"))
find_fact(num)
