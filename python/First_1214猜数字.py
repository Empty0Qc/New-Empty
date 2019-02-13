import random
secret = random.randint(1,10)
print('---------QC--------------')
temp = 11
guess = int(temp)
while guess != secret:
    temp = input("Please try a number:")
    guess = int(temp)
    if guess == secret:
        print("Gongratulatoin!")
    else:
        if guess > secret:
            print("Try small number")
        else:
            print("Try lagre number")
print("Game Over")
