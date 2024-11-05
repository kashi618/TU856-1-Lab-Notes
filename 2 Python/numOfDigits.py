i = 1
numDigits = 1

num = float(input("Enter a number: "))

while True:
    if (num / pow(10,i)) > 1:
        numDigits += 1
    elif (num / pow(10,i)) == 1:
        numDigits += 1
    else:
        break

print(f"The amount of digits in the number {num} is {numDigits}")