import sys

#User input
cigars = int(input("How many cigars do the squirrels have?: "))
day = input("Is it the weekend? Y/N: ")

#Checks if it is the weekend
if day == "Y":
    print("True.")
    sys.exit()

#If it's not a weekend, check the cigars
if  (cigars > 40) and (60 > cigars):
    print("True.")
else:
    print("False.")