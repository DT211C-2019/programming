
def fract_add(tup1, tup2):
	"""This adds to tuples that contain fractions"""

	#prints new value for tuples
	print((tup1[0]+tup2[0]), "/", (tup1[1]+tup2[1]))

def fract_multiply(tup1, tup2):
	"""This function multiplies 2 tuples"""

	#Prints multiplied tuples
	print((tup1[0]*tup2[0]), "/", (tup1[1]*tup2[1]))

#Main
tup1 = (3, 2)
tup2 = (1, 2)
fract_add(tup1, tup2)
fract_multiply(tup1, tup2)
