import numpy as np

target = np.random.randint(1,11)

userGuess = int()

amountGuesses = 3


for i in range(amountGuesses+1):
    userGuess = int(input("Enter a guess (1-10) "))
    if userGuess == target:
        print("You guessed the right number")
        break
    elif userGuess != target:
        amountGuesses -= 1
        print("You guessed wrong")

print(f"The target was {target}")