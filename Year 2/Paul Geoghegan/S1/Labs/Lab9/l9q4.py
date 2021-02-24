
def find_sum(num):
	"""This function takes a number and finds the sum of all the numbers up to and including it"""
	sum = 0
	#Finds total sum
	for i in range(1, num+1):
		sum += i

	#Prints sum
	print("The sum is", sum)

#Main
num = int(input("Please enter a number:\n"))
find_sum(num)