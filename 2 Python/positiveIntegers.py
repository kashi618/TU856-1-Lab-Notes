def positiveIntegers():
    # Initializing variables
    intList = []
    temp = 0
    sum = 0
    mean = 0

    # Repeatedly asks the user to enter a positive integer, and appends it to the list intList
    while True:
        temp = int(input("Enter a positive number (0 to stop): "))
        if temp > 0:
            intList.append(temp)
        else:
            break
    
    # For each integer in the list, add it to the sum
    for i in range(len(intList)):
        sum += intList[i]
    
    # Calculates the mean, dividing the sum by the amount of integers in the list
    mean = sum/len(intList)

    # Returns the value of the mean
    return f"The mean the numbers is {mean}"
# END positiveIntegers Func

print(positiveIntegers())