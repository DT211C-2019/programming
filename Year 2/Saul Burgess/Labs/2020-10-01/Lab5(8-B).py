#input
X = int(input("Enter an integer: " ))

#calc
for i in range (1, X+1):
    ans = range(1, i+1)
    print(' + '.join(map(str, ans)), '=', sum(ans))
