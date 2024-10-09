import numpy as np

def twoNumGuessingGame():
    target = list()
    userGuess = list()

    target.append(np.random.randint(1,100))
    target.append(np.random.randint(1,100))
    target.sort()

    guesses = 3


    for i in range(guesses):
        userGuess = []
        userGuess.append(int(input("Enter number 1: ")))
        userGuess.append(int(input("Enter number 2: ")))
        userGuess.sort()

        if userGuess == target:
            return "You guessed the right numbers"
        else:
            print("One or more numbers is wrong!")

print(twoNumGuessingGame())