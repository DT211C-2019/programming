
def o_count(sstr_list):
	"""Checks how many strings in the list start with o"""


	#Creates count
	count = 0

	#Loops through list
	for i in range(0, len(str_list)):
		if str_list[i][:1] == "o":
			count+=1

	#prints result
	print(count)

#Main
str_list = ['Always', 'look', 'on', 'the', 'bright', 'side', 'of', 'life']
o_count(str_list)
