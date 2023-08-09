# Author: Jason Hammar
# Created: 8/7/23
# Last Edited: 8/7/23
# This program shows how loops and list comprehension work in python, and how to use it.
# In this program, we will use a for loop to add all the prices together to get a total price,
# we will use a for loop to get the total revenue, we will use list comprehension
# to reduce the value of every element in a list by 5, and we will use list comprehension
# to make a new list of haircuts that are under $30.
hairstyles = ["bouffant", "pixie", "dreadlocks", "crew", "bowl", "bob", "mohawk", "flattop"]

prices = [30, 25, 40, 20, 20, 35, 50, 35]

last_week = [2, 3, 5, 8, 4, 4, 6, 2]

total_price = 0
# adds all the values in the prices list together and stores it in total_price
for price in prices:
  total_price += price

average_price = total_price / len(prices)

print("Average Haircut Price: " + str(average_price))
# Creates a new list with all the original prices but with each price subtracted by 5.
new_prices = [price - 5 for price in prices]

print(new_prices)

total_revenue = 0
# This for loop adds up the product of the prices and how many haircuts were given to calculate the total revenue.
for i in range(len(hairstyles)):
  total_revenue += prices[i] * last_week[i]

print("Total Revenue: " + str(total_revenue))

average_daily_revenue = total_revenue / 7

print(average_daily_revenue)
# This creates a new list that takes all of the hairstyles and puts in the list any hairstyles under $30.
cuts_under_30 = [hairstyles[i] for i in range(len(hairstyles)) if new_prices[i] < 30]

print(cuts_under_30)
