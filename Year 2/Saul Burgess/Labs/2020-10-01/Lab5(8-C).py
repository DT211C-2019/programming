#input
X = int(input("Enter an integer: " ))

#calc
i = 0
ans = 0
while (i < X):
    ans += (i+1)
    i += 1

#output
if (ans % X) == 0:
    print("The answer is: ", ans)
else:
    print("This sum is not divisable by the number of operands.")