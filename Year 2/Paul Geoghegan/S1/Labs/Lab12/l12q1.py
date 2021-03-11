
while True:
	try:
		number_str = input("Input a floating-point number: ")
		if "." in number_str:
			break
		else:
			print("Sorry that was not a floating point number")
	except:
		print("Sorry that was not a floating point number")

print("Number is",number_str )
