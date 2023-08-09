# Author: Jason Hammar
# Created: 8/7/23
# Last Updated: 8/7/23
# This program will simulate pizzas being added and taken off the menu using python lists and their methods.
# First, we will count how many times 2 appears in the prices list, then we will store the length of the toppings list,
# We will then state how many pizzas we sell, and then make a 2-D list with each pizza and price.
# We will then sort that 2-D list by price and store the cheapest pizza and most expensive pizza in their own variables.
# We will then remove the last element of the list and insert a new topping in the middle.
# We will then find the three cheapest pizzas and print them ut to the screen.
# this project was done on codecademy and is called Len's slice.
toppings = ["pepperoni", "pineapple", "cheese", "sausage", "olives", "anchovies", "mushrooms"]
prices = [2, 6, 1, 3, 2, 7, 2]
# counts how many times 2 appears in prices
print(prices.count(2))
# gets the length of toppings.
num_pizzas = len(toppings)

print("We sell " + str(num_pizzas) + " different kinds of pizza!")

pizza_and_prices = [[2, "pepperoni"], [6, "pineapple"], [1, "cheese"], [3, "sausage"], [2, "olives"], [7, "anchovies"], [2, "mushrooms"]]

print(pizza_and_prices)

pizza_and_prices.sort()

cheapest_pizza = pizza_and_prices[0]

priciest_pizza = pizza_and_prices[-1]
# Removes anchovies from pizza_and_prices
pizza_and_prices.remove(pizza_and_prices[-1])
# Inserts peppers into pizza_and_prices
pizza_and_prices.insert(-2, [2.5, "peppers"])
# Finds the three cheapest pizzas by slicing pizza_and_prices and taking the first three elements of that list.
three_cheapest = pizza_and_prices[0:3]

print(three_cheapest)
