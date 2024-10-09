def nTermSequence():
    # n is the nth term of the sequence
    n = int(input("Enter a value for n: "))
    s =[1,-3,5,-7,9] # s is the sequence
    sum = 0

    # Each loop adds a term of the sequence, to the nth ter
    # Eg. If n is 5, the sum is (1)+(-3)+(5)+(-7)+(9), which simplifies to 1-3+5-7+9
    for i in range(n):
        sum += s[i]
    
    # Returns the sum of the numbers
    return sum

# END nTermSequence

print(nTermSequence())
