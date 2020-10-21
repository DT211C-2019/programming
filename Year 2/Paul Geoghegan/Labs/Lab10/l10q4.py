
def char_count(str_list, character):
	"""Checks how many strings in the list start with o"""

	#Creates count
	count = 0

	#Loops through list
	for i in range(0, len(str_list)):
		#Checks if character is in current index
		if str_list[i][:1] == character:
			count+=1

	#prints result
	print(count)

#Main
str_list = ['Always', 'look', 'on', 'the', 'bright', 'side', 'of', 'life']
character = input("Please enter a character to find:\n")
char_count(str_list, character)
