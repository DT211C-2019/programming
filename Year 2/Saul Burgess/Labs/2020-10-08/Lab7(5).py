S = "This_is_a_string_of_odd_length."

#A
print("The middle character in this string is: ", S[round(len(S)/2)])

#B
print("The first half of this string is: ", end='')
for i in range(round(len(S)/2)):
    print(S[i], end='')

#The lack of a newline looks ugly IMHO
print()

#C
print("The second half of this string is: ", end='')
for i in range(round(len(S)/2)+1, len(S)):
    print(S[i], end='')