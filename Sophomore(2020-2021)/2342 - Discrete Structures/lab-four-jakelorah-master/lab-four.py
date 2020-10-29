#!/usr/bin/env python3

import math

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = [""]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__Description__ = "The purpose of this work is to implement a simple sequence generator."


#userInput function.
def userInput():
    #gives the user directions on how to enter their rule.
    print("Directions: When you enter your rule, please use the '*' symbol when multiplying, '/' when dividing, and '**' for an exponent(e.g. n**2)\n")
   
    #user input for generator rule.
    generatorrule = input("Please enter your generator rule (only use the variable 'n') (e.g. 3*n-1): ")

    #user input for first term.
    firstterm = int(input("Enter the first term (e.g. 1): "))

    #user input for number of terms in sequence.
    numterms = int(input("Please enter the number of terms in the sequence (max: 100): "))
    
    #while statement that gives a limit on the number of terms, which I set it to be a 100. This avoids it being infinity. Also, it checks to make sure it isn't a value of 0 or below (negative).
    while numterms > 100 or numterms <= 0:
        #displays an error and prompts the user to try again.
        numterms = int(input("Error: you exceeded the limit of the number of terms, which is 100, or you entered a value that is 0 or below. Please try again: "))

    computeRule(generatorrule, firstterm, numterms)

#computeRule function.
def computeRule(generatorrule, firstterm, numterms):

    #prints the first term for each sequence.
    print(firstterm)

    #number of terms including the first term.
    numterms2 = numterms-1

    #for loop that does the sequence calculation.
    for n in range(firstterm+1, firstterm+numterms2):
        result = print(eval(generatorrule))


#main function.
def main():
    userInput()

    return 0



if __name__ == "__main__":
    main()
