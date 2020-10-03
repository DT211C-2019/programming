#User input
speed = int(input("What speed were you going?: "))
birthday = input("Is it your birthday? Y/N: ")

#Birthday helper!
if birthday == "Y":
    birthmath = 5
else:
    birthmath = 0

#Problem tree
if speed > 81 + birthmath:
    print("2.")

elif (speed > 61+birthmath) and (80+birthmath > speed):
    print("1.")

else:
    print("0.")