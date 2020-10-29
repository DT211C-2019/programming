 #reverse each line of the input file in the output file
file_str = input("Open what file:")
find_line_str = input("Which line (integer):")

#Answers A & B
while True:
    try:
        input_file = open(file_str)
        break
    except IOError:
        print("The file", file_str, "doesn't exist.")

#Answers B
while True:
    try:
        find_line_int = int(find_line_str)  # potential user error
        break
    except ValueError:
        print("Line", find_line_str, "isn't a legal line number.")


line_count_int = 1

for line_str in input_file:
    if line_count_int == find_line_int:
        print("Line {} of file {} is {}".format(find_line_int, file_str,line_str))
        break
    line_count_int += 1

else:
    # get here if line sought doesn't exist
    print("Line {} of file {} not found".format(find_line_int, file_str))
    input_file.close()
               
print("End of the program")