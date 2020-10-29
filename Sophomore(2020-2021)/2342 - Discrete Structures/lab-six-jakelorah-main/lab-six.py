#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = ["Mike Blanchard"]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__Description__ = "The purpose of this program is to compute combinations and permutations."

import math

def main():
    #welcome message.
    print("Welcome to Jake's program that computes combinations and permutations\n\n")

    #giving directions to user asking if they care about the order or not.
    userInput = input("Please enter 'y' if order matters and 'n' if order does not matter (lowercase only): ")
    
    #creating sum and product variables.
    sumrule = 0
    product = 1

    #if statement that runs if the user input is no/order does not matter.
    if userInput == 'n':
        no = int(input("Please enter the number of sets you would like to enter: "))
        for i in range(0,no):
            sumrule = 0
            product = 1

            #ask user to input the set. this keeps repeating depending on the number of sets they want to enter from above.
            setrule = input("Please enter the set by seperating each element by a comma: ")

            #splits up each number entered between the commas.           
            finishedset = setrule.split(",")
            for i in range(0,len(finishedset)):
                #takes the lengths of the element inputed
                sumrule = sumrule + int(finishedset[i])
                product = product * int(finishedset[i])

            print("Sum Rule: ", sumrule)
            print("Product Rule: ", product)

    #if statement that runs if the user input is yes/order does matter.
    elif userInput == 'y':
        yes = input("Please enter all elements of the set seperating each element by a comma: ")

        #splits up each number entered between the commas.
        finishedset2 = yes.split(",")

        #asks user to input the size of the subset.
        subset = int(input("Please enter the size of the subset: "))

        #if size of subset is 0, it just computes the factorial of the length.
        if subset == 0:
            product = math.factorial(len(finishedset2))
  
        #if size is NOT 0, it computes the factorial and then divides it by the same thing minus the length of subset.
        elif subset != 0:
            product = (math.factorial(len(finishedset2))) / (math.factorial(len(finishedset2) - subset))

        print(product)

if __name__ == "__main__":
    main()

