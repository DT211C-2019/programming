#User input
temperature = int(input("What is the temperature?: "))
season = input("Is it the summer? Y/N: ")

#Checks if it is the summer or winter
if season == "Y":
    if  (temperature > 60) and (100 > temperature):
        print("True.")
    else:
        print("False.")

else:
    if  (temperature > 60) and (90 > temperature):
        print("True.")
    else:
        print("False.")