
num = int(input("Please enter an int:\n"))

num_dict = {"1":"one", "2":"two", "3":"three", "4":"four", "5":"five", "6":"six", "7":"seven", "8":"eight", "9":"nine", "0":"zero"}

num_str = str(num)
num_str2 = str()

for i in num_str:
	num_str2+= num_dict[i]+" "

print(num_str2)