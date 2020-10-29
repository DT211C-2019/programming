
#Creates a string of vowels and an empty string
vowels = "aeiou"
str_final = ""

#This will loop around untill the user decides to exit the program
while( 1 ):
	#Gets an input from the user
	str = input("Please enter a string:\n")

	#Checks if the user wants to exit the program
	if str == ".":
		break
	else:

		#Checks if the string starts with a vowel
		if str[0] in vowels:

			#Concatinates yay to the end of the string
			str_final = str+"yay"

		else:

			#This moves all the consonants befor the first vowel to the end of the word
			i = 1
			while str[i] not in vowels:
				i+=i

			#This moves all characters befor the first vowel to the end and appends "a" to the end
			str_final = str[i:]+str[:i]+"a"

		#prints out the final string
		print("The new string is:" + str_final)
