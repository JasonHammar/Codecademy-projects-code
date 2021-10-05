import random
# Name, question, and answer with an empty string, and a random number between 1 and 9.
name = "Jason"
question = "Will the 49ers make it to the superbowl?"
answer = " "
random_number = random.randint(1, 9)
# The below code will check what answer to give based on the value of the number
# An error will be printed if out of bounds
if random_number == 1:
  answer = "Yes - Definitely."
elif random_number == 2:
  answer = "It is Decidedly So."
elif random_number == 3:
  answer = "Without a Doubt."
elif random_number == 4:
  answer = "Reply hazy, try again."
elif random_number == 5:
  answer = "Ask again later."
elif random_number == 6:
  answer = "Better not tell you now."
elif random_number == 7:
  answer = "My sources say no."
elif random_number == 8:
  answer = "Outlook not so good."
elif random_number == 9:
  answer = "Very doubtful."
else:
  print("Error")
# Prints Name, question, and Magic 8-Ball Answer.
print(name + " asks: " + question)
print("Magic 8-Balls Answer: " + answer)
