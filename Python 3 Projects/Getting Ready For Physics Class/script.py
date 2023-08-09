# Author: Jason Hammar
# Created: 8/7/23
# Last Updated: 8/7/23
# This program demonstrates how functions work in python, and how they can be used in various situations.
train_mass = 22680
train_acceleration = 10
train_distance = 100
bomb_mass = 1


# Write your code below: 
# This function converts temperature from farenheit to celsius. 
# It takes in one parameter which is farenheit temperature and returns the celsius temperature.
def f_to_c(f_temp):
  c_temp = (f_temp - 32) * 5/9
  return c_temp

f100_in_celsius = f_to_c(100)
# this function converts temperature from celsius to farenheit.
# It takes in one parameter which is celsius temperature and returns the farenheit temperature.
def c_to_f(c_temp):
  f_temp = c_temp * (9/5) + 32
  return f_temp

c0_in_farenheit = c_to_f(0)
# This function takes in two parameters, mass and acceleration, and returns the product of these two parameters.
def get_force(mass, acceleration):
  return mass * acceleration

train_force = get_force(train_mass, train_acceleration)

print(train_force)

print("The GE train supplies " + str(train_force) + " Newtons of force")
# This function takes in two parameters, mass and temp, the latter of which is set to a default value.
# this function returns mass times c squared.
def get_energy(mass, c = 3 * 10 ** 8):
  return mass * c ** 2

bomb_energy = get_energy(bomb_mass)

print("A 1kg bomb supplies " + str(bomb_energy) + " Joules.")
# This function calculates the work of a specific object.
# It takes in three parameters, mass, acceleration, and distance, 
# then it gets the force of the object by calling get_force with mass and acceleration,
# then the function returns the product of the force and the distance of the object.
def get_work(mass, acceleration, distance):
  force = get_force(mass, acceleration)
  return force * distance

train_work = get_work(train_mass, train_acceleration, train_distance)

print("The GE train does " + str(train_work) + " Joules of work over " + str(train_distance) + " meters.")
