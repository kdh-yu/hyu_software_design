import random

HANGMAN_PICS = [''' ''','''
  +---+
      |
      |
      |
     ===''', '''
  +---+
  O   |
      |
      |
     ===''', '''
  +---+
  O   |
  |   |
      |
     ===''', '''
  +---+
  O   |
 /|   |
      |
     ===''', '''
  +---+
  O   |
 /|\  |
      |
     ===''', '''
  +---+
  O   |
 /|\  |
 /    |
     ===''', '''
  +---+
  O   |
 /|\  |
 / \  |
     ===''']

word_list = ["hanyang university", "computer science", "data science", "python programming"]

def make_underbar_word(word):
    hidden_word = ""
    for i in range(len(word)):
        if word[i] != " ":
            hidden_word += "_"
        else:
            hidden_word += " "
    return hidden_word

def hangman(word):
    hidden = make_underbar_word(word)
    chance = 6
    wrong = []
    while word != hidden:
        if chance > 0:
            print(hidden)
            input_letter = input("\nGuess : ")

            if len(input_letter) == 1:
                if input_letter in word:
                    for k in range (len(word)):
                        if input_letter == word[k]:
                            hidden = hidden[:k] + input_letter + hidden[k+1:]
                else:
                    if input_letter not in wrong:
                        wrong.append(input_letter)
                        chance -= 1
                    else:
                        chance -= 1 

            elif input_letter in word:
                index = word.find(input_letter)
                hidden= hidden[:index] + input_letter + hidden[index+len(input_letter):]

            else:
                if input_letter not in wrong:
                    wrong.append(input_letter)
                    chance -= 1
                else:
                    chance -= 1
            print(HANGMAN_PICS[6-chance])
            print(wrong)

        else:
            print(HANGMAN_PICS[7])
            break
    print("Clear")

word = random.choice(word_list)
hangman(word)