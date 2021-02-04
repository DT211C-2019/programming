
try:

	num1 = float(input("Please enter the first number:\n"))
	num2 = float(input("Please enter the second number:\n"))
	num3 = float(input("Please enter the third number:\n"))

except:
	print("Sorry they were not numbers")

try:

	num = (num1/num2)+num3

except ValueError:
	print("Sorry those were not valid numbers")
except ZeroDivisionError: 
	print("Sorry you can't devide by 0")

print(num)