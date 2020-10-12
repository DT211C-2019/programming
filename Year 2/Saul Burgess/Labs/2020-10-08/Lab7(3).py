string = "Monty Python"

# Answer to A
print("The first character in the string is", string[1])

# Answer to B and C
print("The last character in the string is", string[len(string)-1])

# Answer to D
print("The word 'Monty' will now be printed: ")
for i in range(0, 5):
    print(string[i], end='')