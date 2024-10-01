def main():
    num = int(input("Enter the number: "))
    power = int(input("Enter the power : "))
    ans = num

# A time A, B amount of times

    for i in range(power-1):
        ans *= num
    print(num,"by the power of",power,"is",ans)

        
main()
