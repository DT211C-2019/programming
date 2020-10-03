# Initial Variables
i = 100
ans = 0

# Calc loop
while i <= 999:
    i += 1
    if (i % 17) <= 0:
        ans += 1

# Output
print("There are", ans, "divisible by 17 between 100 and 999.")