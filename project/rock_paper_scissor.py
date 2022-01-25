import random
print("=============================================================")
print("            THIS IS A GAME CONSISTING OF 5 ROUNDS")
print("    YOU NEED TO WIN 3 OUT OF 5 ROUNDS TO WIN THE GAME")
print("                      ALL THE BEST!!")
print("=============================================================")
computer_score=0
user_score=0
for i in range(0,5):
    user_action = input("Enter a choice (rock, paper, scissors): ")
    possible_actions = ["rock", "paper", "scissors"]
    computer_action = random.choice(possible_actions)
    print(f"\nYou chose {user_action}, computer chose {computer_action}.")
    if user_action == computer_action:
        print(f"Both players selected {user_action}. It's a tie!\n")
    elif user_action == "rock":
        if computer_action == "scissors":
            print("Rock smashes scissors! You win!\n")
            user_score+=1
        else:
            print("Paper covers rock! You lose.\n")
            computer_score+=1
    elif user_action == "paper":
        if computer_action == "rock":
            print("Paper covers rock! You win!\n")
            user_score+=1
        else:
            print("Scissors cuts paper! You lose.\n")
            computer_score+=1
    elif user_action == "scissors":
        if computer_action == "paper":
            print("Scissors cuts paper! You win!\n")
            user_score+=1
        else:
            print("Rock smashes scissors! You lose.")
            computer_score+=1
print()
print("==========================FINAL SCORES=======================")
print("THE COMPUTER's SCORE IS :",computer_score)
print("THE USER's SCORE IS :",user_score)
print("=============================================================")
if computer_score>user_score:
    print("COMPUTER WON THE GAME")
    print("BETTER LUCK NEXT TIME!")
elif user_score>computer_score:
    print("CONGRATULATIONS!! YOU WON THE GAME")
print("===========================THE END===========================")