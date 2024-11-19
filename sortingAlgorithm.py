nums = [6,2,8,8,9,4]
lenList = len(nums)
min = nums[0]


j = 1
indexOfMin = 0
temp = 0


for i in range(lenList):
    min = nums[i]
    j=i+1
    indexOfMin=i

    # Finds smallest number in the list
    # min is the value
    # indexOfMin is the index
    # j
    while j < lenList:
        if nums[j] < min:
            min = nums[j]
            indexOfMin = j
        j += 1

    # Swaps min number and first index
    temp = nums[i] 
    nums[indexOfMin] = temp
    nums[i] = min
    
    print(nums)


print(nums)
