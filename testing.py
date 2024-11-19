nums = [2,6,4,3,5,1,7,5,8,9,4,2]

min = nums[0]
j = 1
p = 0 # index of smallest number
temp = 0

for i in range(len(nums)):
    

    # Finds smallest number
    while j < len(nums):
        if nums[j] < min:
            min = nums[j]
            p = j
        j += 1
    
    j=i+1

    nums[i] = min
    nums[i] = nums[p] # Sets index 0 of list to smallest number
    nums[p] = temp # Sets position of smallest number back to original number

    
print(nums)
