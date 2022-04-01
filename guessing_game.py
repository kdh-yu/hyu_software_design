import random

word_list = ["data science", "hanyang university"]

def get_user_name():
    name = input("What's your name?\n: ")
    print(f"Okay, {name}. I'll give you word guessing game. Let's start!\n")

def choose_random_word(list):
    return list[random.randint(0,len(list)-1)]

def make_underbar_word(word):
    hidden_word = ""
    for i in range(len(word)):
        if word[i] != " ":
            hidden_word += "_"
        else:
            hidden_word += " "
    return hidden_word

def guess(chances, answer_word, underbar_word):
    need_to_try = True
    while need_to_try:
        if answer_word != underbar_word:
            now_guess = 0
            print(underbar_word)
            alphabet = input("Guess : ")
            for k in range(len(answer_word)):
                if alphabet == answer_word[k] and underbar_word[k] == "_":
                    underbar_word = underbar_word[:k] + alphabet + underbar_word[k+1:]
                    now_guess += 1
            print(f"You guessed {now_guess}.")
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
answer = choose_random_word(word_list)
target_sentence = make_underbar_word(answer)
guess(len(answer)*2,answer,target_sentence)