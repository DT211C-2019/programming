
#Gets a string to be stored in s
s = input("Please enter a string with an uneven number of characters:\n")

#Prints the middle character
print(s[int(len(s)/2)])

#Prints everything befor the middle character
print(s[:int(len(s)/2)])

#Prints everything after the middle character
print(s[int((len(s)/2)+1):])

