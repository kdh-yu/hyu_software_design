# Dragon Realm
import time
import random

def Intro():
    print("You are in a land full of dragons.\nIn front of you, you see two caves. \nIn one cave, the dragon is friendly and will share this treasure with you.\nBut the other dragon is greddy and hungry, and will eat you on sight.")
    print("")
    time.sleep(2)

def ChooseCave():
    cave = 0
    while cave != 1 and cave != 2:
        print("Which cave will you go into? Type 1 or 2.")
        try:
            cave = int(input("Cave : "))
            return cave
        except:
            print("Invalid input was detected. Please input only number.")

def CheckCave(ChosenOne):
    print("You approach the cave...")
    time.sleep(2)
    print("It's dark and spooky...")
    time.sleep(2)
    print("A large dragon jumps out in front of you!! He opens his jaws and...\n")
    time.sleep(2)

    Lucky = random.randint(1,2)
    if ChosenOne == Lucky:
        print("Gives you treasures!!")
    else:
        print("Gobbles you down in one bite!!")

playAgain = "y"
while playAgain == "y": 
    Intro()
    cave_choose = ChooseCave()
    CheckCave(cave_choose)

    print("Do you want to play again !? Type y or n.")
    playAgain = input()
    print("")
print("Game Over.")
#