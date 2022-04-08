import random

HANGMAN_PICS = ['''
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
words = 'ant baboon badger bat bear beaver camel cat clam cobra cougar coyote crow deer dog donkey duck eagle ferret fox frog goat goose hawk lion lizard llama mole monkey moose mouse mule newt otter owl panda parrot pigeon python rabbit ram rat raven rhino salmon seal shark sheep skunk sloth snake spider stork swan tiger toad trout turkey turtle weasel whale wolf wombat zebra'.split()
def get_random_word(word_list):
    return random.choice(words)

def get_guess(already_guessed):
    while True:
        guess = input('Guess a letter:')
        guess = guess.lower() 
        if guess not in "abcdefghijklmnopqrstuvwxyz":
            return "nope"
        elif len(guess) == 1:
            if guess not in already_guessed:
                return guess
            else:
                return "already"
        else:
            return "more"
    
def update_blank_word(guess):
    global missed_letters, correct_letters, blank_word
    if guess == "already":
        print("You already used")
    elif guess == "more":
        print("You should input only 1 letter.")
    elif guess == "nope":
        print("You should input alphabet.")
    elif guess in answer_word:
        for i in range(len(answer_word)):
            if guess == answer_word[i]:
                blank_word = blank_word[:i] + guess + blank_word[i+1:]
        correct_letters += guess
    else:
        missed_letters += guess
    pass
    
def displayBoard(missed_letters, blank_word):
    print(HANGMAN_PICS[len(missed_letters)])
    print(f"Missed : {missed_letters}")
    print(blank_word)
    print("")
    pass

answer_word = get_random_word(words)
blank_word = '_'*len(answer_word)
missed_letters = ''
correct_letters = ''

print('H A N G M A N')
displayBoard(missed_letters, blank_word)

while '_' in blank_word and len(missed_letters) < len(HANGMAN_PICS)-1:
    guess = get_guess(missed_letters + correct_letters)
    update_blank_word(guess)
    displayBoard(missed_letters, blank_word)

if '_' not in blank_word:
    print('Congratulations, you\'ve won!')
else:
    print(f'Sorry, you\'ve lost. The word is {answer_word.upper()}.')
    
    
    