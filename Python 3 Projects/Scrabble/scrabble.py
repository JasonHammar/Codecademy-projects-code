# Author: Jason Hammar
# Created: 8/8/23
# Last Updated: 8/8/23
# This program will simulate a scrabble game while also showing how dictionaries work in python
# In this program, we will have multiple dictionaries that show how much each letter is worth,
# and the words that each player has made. It will also show how dictionaries are formed.

letters = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
points = [1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 4, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10]
# This piece of code below creates a dictionary from the letters and points lists with
# letters being the key and points being the value
letters_to_points = {letters:points for letters, points in zip(letters, points)}

letters_to_points[" "] = 0
# this function scores the word based on the letters that make up the word and how many points those letters are worth.
def score_word(word):
  point_total = 0
  for i in word:
    point_total += letters_to_points[i]
  return point_total

print(score_word("BROWNIE"))

player_to_words = {"BLUE": ["EARTH", "ERASER", "ZAP"], "TENNIS": ["EYES", "BELLY", "COMA"], "EXIT": ["MACHINE", "HUSKY", "PERIOD"]}

player_to_points = {}
# these nested for loops give players a score based on the words they were able to create
for player, words in player_to_words.items():
  player_points = 0
  for word in words:
    player_points += score_word(word)
  player_to_points[player] = player_points

print(player_to_points)
