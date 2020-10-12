while(1):
    #Grabs innitial entry
    user_input = input("Please enter a string. You can enter a period (.) to end the program: ")

    #If the user enters '.' the program will end
    if user_input == '.':
        print("Goodbye!")
        break

    #Sanatizes input
    user_input = user_input.casefold()
    user_input = list(user_input)
    output=''

    #Initiates the list for vowels / consenents
    vowels = set("aeiou")
    vowelsORconsenents = [0]*len(user_input)

    #Generates a list containing the checked values of the input string to the same key as the input list
    t=0
    for i in user_input:
        if (i=='a' or i=='e' or i=='i' or i=='o' or i=='u' ):
            vowelsORconsenents[t] = 'v'
        
        elif i==' ':
            vowelsORconsenents[t] = ' '

        else:
            vowelsORconsenents[t] = 'c'
        t+=1

    # Checks if rule 1 is true, then executes rule 1
    if vowelsORconsenents[0] == 'v':
        user_input += 'yay'
        print("Rule 1 triggered: ", output.join(user_input), "\n")

    #Checks if rule 2 is true, then executes rule 2
    if vowelsORconsenents[0] == 'c':
        t=0
        for i in vowelsORconsenents:
            if i == 'v':
                break
            t+=1

        temp = user_input[slice(t)]
        user_input = user_input[slice(t, len(user_input))] + temp
        user_input += 'ay'
        print("Rule 2 triggered: ", output.join(user_input), "\n")
