inputWeight = int(input("Please enter your weight in pounds: "))
inputHeight = int(input("Please enter your height in inches: "))

answer = (inputWeight * 0.453592) / (inputHeight * 2.54) ** 2

print(answer)