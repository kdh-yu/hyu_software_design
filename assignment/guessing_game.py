# Code by 2022094093 Dohoon Kim, Dept. of Data Science.
import random

word_list = ["hanyang university", "computer science", "data science", "python programming"]

# Get user's name, and show Intro.
def get_user_name():
    name = input("What's your name?\n: ")
    print(f"Good, {name}!")
    print("We are going to play a guess the word game.")
    print("You have 10 chances to guess the word.")
    print("Words are about our school.")
    print("The word will be chosen by the computer.\n")

# Randomly choose word from 'word_list'
def get_random_word(list):
    return random.choice(list)

# Make answer word to underbar.
# For example, "apple" changes to "_____".
def make_underbar_word(word):
    hidden_word = ""
    for i in range(len(word)):
        if word[i] != " ":
            hidden_word += "_"
        else:
            hidden_word += " "
    return hidden_word

def guessing(answer_word):
    chances = 10
    underbar_word = make_underbar_word(answer_word)
    need_to_try = True

    while need_to_try:
        if answer_word != underbar_word:
            now_guess = 0
            print(underbar_word)
            alphabet = input("Guess : ")
            if len(alphabet) == 1:
                for k in range(len(answer_word)):  # Underbar to alphabet letter
                    if alphabet == answer_word[k] and underbar_word[k] == "_":
                        underbar_word = underbar_word[:k] + alphabet + underbar_word[k+1:]
                        now_guess += 1
                print(f"You guessed {now_guess}.")
            elif alphabet == answer_word:  # When more than one letter entered, and answer is correct
                print(f"Congratulations!! You finally guessed the word '{answer_word}'!!")
                need_to_try = False
            else:
                print("Nope! I think you tried to guess the full word,")
                print(f"But '{alphabet}' is not the answer.")
            chances -= 1

            if chances > 0:
                print(f"Now you have {chances} chance(s).\n")
            elif chances == 0:
                break

        if answer_word == underbar_word:
            print(f"Congratulations!! You finally guessed the word '{answer_word}'!!")
            need_to_try = False

    if need_to_try:
        print(f"\nAt last, you guessed {underbar_word}.")
        print(f"The answer was '{answer_word}'.")
        print("Game Over.")

# Start Guessing Game !!
get_user_name()
answer = get_random_word(word_list)
target_sentence = make_underbar_word(answer)
guessing(answer)