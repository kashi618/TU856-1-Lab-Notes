# Swaps two elements in a list
def swapXandY(x,y,list):
    temp = list[x]
    list[x] = list[y]
    list[y] = temp
    return list
# End swapXandY


# Reverses the order of a list
def reverseList(list):
    # If even, length is equal to half the amount of elements in the list
    if len(list) % 2 == 0:
        length = int(len(list)/2)
    # If odd, length is the number before the middle number in the list
    else:
        length = int((len(list) - 1) / 2)


    j = len(list) - 1
    for i in range(length):
        # i gets incremented by 1
        # j gets deincremended by 1
        swapXandY(i,j,list)
        j -= 1
    
    return list
# End reverseList



# Initializing List, and prints out its value
nums = [1,2,3,4,5,6,7]
print(nums)

# Initializes and finds the reverse of the list, printing it out
reversedNum = reverseList(nums)
print(reversedNum)



