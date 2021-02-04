import string

file_str = str()
file_set = set()
file_dict = {}
story_file = open("hare_and_tortoise.txt")
common_words_file = open("stopwords.txt")
html_file = open("words.html", "w")

for line in story_file:
	file_str+=line

story_file.close()

file_str = file_str.translate(str.maketrans('', '', string.punctuation)).lower()

file_set = set(file_str.split())
file_list = file_str.split()

for i in file_set:
	file_dict[i] = 0
	for j in file_list:
		if j == i:
			file_dict[i]+=1

file_str = ""

for line in common_words_file:
	file_str+=line

common_words_file.close()

file_list = file_str.split()

for i in file_list:
	try:
		file_dict.pop(i.lower())
	except:
		pass

html_file.write("""<!DOCTYPE html>
<html>
<head lang="en">
<meta charset="UTF-8">
<title>Tag Cloud Generator</title>
</head>
<body>
<div style="text-align: center; width: 15%; vertical-align: middle; font-family: arial; color: white; background-color:black; border:1px solid black">""")

html_file.close()

html_file = open("words.html", "a")

for i in file_dict:
	html_string = "\n<span style=\"font-size: "+str(file_dict[i]*10)+"px\"> "+i+" </span> </br>"
	html_file.write(html_string)

html_file.write("""
</div>
</body>
</html>""")

html_file.close()