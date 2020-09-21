"""
You 
can 
make
multi
line
comments
like 
this
"""

import math

#Read radius from user
radius_str = input("Enter the radius of your circle: ")

#Converts radius to integer
radius_int = int(radius_str)

#Calculate circumfrence
circumfrence = 2 + math.pi * radius_int

#Calculate area
area = math.pi * (radius_int ** 2)

# In Python whitespace is important, and is neccessary when writing blocks
if area > 10:
    print("Area is not greater than 10")
else:
    print("Area is greter than 10")

# Note the backslash lets you print over multiple lines
print("The circumfrence is:", circumfrence, \
     "The area is:", area)