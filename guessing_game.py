import random

word_list = ["hanyang university", "computer science", "data science", "python programming"]

def get_user_name():
    name = input("What's your name?\n: ")
    print(f"Good Luck, {name}!")
    print("We are going to play a guess the word game.")
    print("The word will be chosen by the computer.\n")

def get_random_word(list):
    return random.choice(list)

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
                for k in range(len(answer_word)):
                    if alphabet == answer_word[k] and underbar_word[k] == "_":
                        underbar_word = underbar_word[:k] + alphabet + underbar_word[k+1:]
                        now_guess += 1
                print(f"You guessed {now_guess}.")
            else:
                if alphabet in answer_word:
                    slice_index = answer_word.find(alphabet)
                    underbar_word = underbar_word[:slice_index] + alphabet + underbar_word[slice_index+len(alphabet):]
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

get_user_name()
answer = get_random_word(word_list)
target_sentence = make_underbar_word(answer)
guessing(answer)