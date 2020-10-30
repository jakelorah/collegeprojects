#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = [""]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__Description__ = "The purpose of this work is to develop a program to compute discrete probabilities using coin flips."

import fractions #imported this library to compute the fraction.
import random #random number library.
import string #string library.

#welcome message.
print("Welcome to Jake's coin flip program! \n\n")

#ask user to input both the number of coin flips and number of times they want it to be heads.
flips = int(input("Please enter how many times the coin should be flipped: "))
heads = int(input("Please enter how many of those flips should come up heads: "))

#coin flip function.
def coinflip():
    return random.choice(["Heads","Tails"])

for i in range(0,flips):
    print(coinflip())

#factorial function which computes the factorial.
def factorial(n):
      
    fact = 1
    for i in range(2, n + 1):  
        fact = fact * i 
    return fact 

#counter function which applies the formula.  
def counter(b, c): 
      
    count = factorial(b) / (factorial(c) * factorial(b - c)) 
    count = count / (pow(2, b)) 
    return count 
  
#print statements that show the results in decimal, percent, and fraction form.
print("\nProbability in decimal: ", counter(flips, heads))

percent = counter(flips, heads) * 100
print("Probability in percent: ", percent, "%")

#converts percent to fraction. a little more complex.
def percent_to_fraction(percent):
    fraction = fractions.Fraction(counter(flips, heads))
    return fraction 
 
percent_input = 75
fraction_output = percent_to_fraction(percent_input)

print('Probability in a fraction:  {0}'.format(fraction_output))
