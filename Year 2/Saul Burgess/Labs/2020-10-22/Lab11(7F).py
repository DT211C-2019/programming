vowels = ('a','e','i','o','u','A','E','I','O','U')
input = input("Enter a string: ")

output = ""
output = output.join([i for i in input if i not in vowels])

print(output)