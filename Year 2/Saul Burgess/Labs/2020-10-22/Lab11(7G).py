input = input("Please enter a string: ").split()
output = [i for i in input if len(i) <= 4]

print("The words that contain less then four letters are:", output)