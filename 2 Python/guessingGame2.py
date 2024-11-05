import numpy as np
import random

t1 = random.randint(1,100)
t2 = random.randint(1,100)

won = 0
numguesses = 0

print(t1,t2)
print("For this game you have to guess two positive integers between 1 and 100")
print("The sum of the numbers you need is", t1+t2, "The product is",t1*t2)

while numguesses <3 and won==0:
    numguesses += 1
    a = int(input("Please enter a number: "))
    b = int(input("Please enter a number: "))

