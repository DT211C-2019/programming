user_input = int(input("Please enter an integer: "))

ans = 1
for i in range(1, user_input+1):
    ans = ans*i

print("The factorial of", user_input, "is", ans)