import random
title = ""
title = "Wordle Clone"
#loading in the word bank
word_bank = open("Wordle clone\\words.txt", "r")
line = word_bank.readline()
print(line, 2)
word_list = word_bank.readlines()

rand_choice = 0


#presetting a word for that round
#rand_choice = random.randint(0, count)
#choice = (word_list[rand_choice]).lower()
#print(choice)

#lists to keep track of letter guesses

incorrect = []
misplaced = []
max_turns = 5
num_turns = 0
#welcome messages
print("Welcome, player! This is", title)
print("This word has 5 letters.")
print("You have", max_turns - num_turns, "turns left to guess the word")
won = 0

#setting the game loop, with in-built validation
while num_turns<max_turns:
    answer = ""
    guess = input("What is your guess?")
    if guess.isalpha() == False or len(guess) != 5:
        print("This is not a valid answer. Please try again.")
        continue
    guess = guess.lower()

    #comparing to choice
    for i in range(0,5):
        found = 0
        if choice[i] == guess[i]:
            if guess[i] in misplaced:
                misplaced.remove(guess[i])
            answer += (choice[i])
        else:
            for j in range (0,5):
                if choice[j] == guess[i]:
                    if guess[i] not in misplaced:
                        misplaced.append(guess[i])
                    answer += ("_")
                    found = 1
                    break
            if found == 0:
                if guess[i] not in incorrect:
                    incorrect.append(guess[i])
                answer += "_"
    
    print("Currently, you have:", answer)
    print("Your misplaced letters are:", misplaced)
    print("The incorrect letters are:", incorrect)
    num_turns+=1
    if answer == choice:
        #user has won
        won = 1
        print("Congratulations! You have successfully guessed the word!")
        num_turns = 5
    else:
        print("You have", max_turns - num_turns, "turns left to guess the word")


if won == 0:
    print("You have run out of turns. The correct answer was " + choice + ". Try again!")
