
def even_or_odd(num):
	"""This will check if a number and all the numbers befor it are even or odd"""
	for i in range(1, num+1):

		#Checks if number is even or odd
		if i % 2 == 0:
			print(i, "Is even")
		else:
			print(i, "is odd")


#Main
num = int(input("Please enter a number:\n"))
even_or_odd(num)