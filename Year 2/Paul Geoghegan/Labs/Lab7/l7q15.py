import random

#This gets a n input from the user
str = input("Please enter a string:\n")

#This will generate the two numbers
index1 = random.randint(0, len(str))
index2 = random.randint(0, len(str))

#Checks which is larger
if index1 < index2:
	str1 = str[0:index1]
	str2 = str[(index1+1):index2]
	str3 = str[(index2+1):len(str)]
else:
	str1 = str[0:index2]
	str2 = str[(index2+1):index1]
	str3 = str[(index1+1):len(str)]


#Creates blank string
str_new = ""

#Concatinates the strings back together
str_new = str1+str2+str3

#Prints new string
print(str_new)