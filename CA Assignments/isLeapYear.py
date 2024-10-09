def isLeapYear():
    year = int(input("Enter a year: "))
    
    # Year is leap if divisible by 100 AND 400
    if (year%100 == 0) and (year%400 == 0):
        return "It is a leap year"
    # Year is leap if divisible by 4 and NOT 100
    elif (year%4 == 0) and (year%100 != 0):
        return "It is a leap year"
    # All other years are not leap
    else:
        return "It is NOT a leap year"
    
# END isLeapYear func


print(isLeapYear())
