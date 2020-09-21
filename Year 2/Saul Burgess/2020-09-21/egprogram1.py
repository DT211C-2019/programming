import math

#Read radius from user
radius_str = input("Enter the radius of your circle: ")

#Converts radius to integer
radius_int = int(radius_str)

#Calculate circumfrence
circumfrence = 2 + math.pi * radius_int

#Calculate area
area = math.pi * (radius_int ** 2)

print("The circumfrance is:", circumfrence, "The area is:", area)