
def main(nums):
    nums0=[]
    nums1=[]
    nums2=[]
    nums3=[]
    nums4=[]
    nums5=[]
    nums6=[]
    nums7=[]
    nums8=[]
    nums9=[]
    numbers = nums

    for i in range(0,len(numbers)):
        if   numbers[i] == 0:
            nums0.append(0)
        elif numbers[i] == 1:
            nums1.append(1)
        elif numbers[i] == 2:
            nums2.append(2)
        elif numbers[i] == 3:
            nums3.append(3)
        elif numbers[i] == 4:
            nums4.append(4)
        elif numbers[i] == 5:
            nums5.append(5)
        elif numbers[i] == 6:
            nums6.append(6)
        elif numbers[i] == 7:
            nums7.append(7)
        elif numbers[i] == 8:
            nums8.append(8)
        elif numbers[i] == 9:
            nums9.append(9)

    print(nums0)
    if   len(nums0) == 1:
        return 0
    elif len(nums1) == 1:
        return 1
    elif len(nums2) == 1:
        return 2
    elif len(nums3) == 1:
        return 3
    elif len(nums4) == 1:
        return 4
    elif len(nums5) == 1:
        return 5
    elif len(nums6) == 1:
        return 6
    elif len(nums7) == 1:
        return 7
    elif len(nums8) == 1:
        return 8
    elif len(nums9) == 1:
        return 9

        
        

a = [0,6,6,5,5]
print(main(a))