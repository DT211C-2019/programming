
string = input("Please enter a string:\n")
vowels = "aeiou"
new_str = ""

#Loops through string and creates new string withour vowels
for i in range(len(string)):
	#Checks if character is a vowel
	if string[i] not in vowels:
		new_str+=string[i]

#prints new string
print(new_str)