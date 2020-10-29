#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = [""]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__Description__ = "The purpose of this work is to implement a program to test whether a given positive integer is prime or composite."

#title/welcome text.
print("Welcome to Jake Lorah's Program to test whether a given positive integer is prime or composite!\n")

#asking for user input and storing that value to the variable 'userinput'.
userinput = int(input("Please input a positive integer: "))

#since a prime number is always greater than 1, I restrict user input to greater than 1.
if userinput > 1:
    for i in range(2, userinput):
        if (userinput % i) == 0: #using modular arithmetic.
            print(userinput, "is a composite number.") #prints user input is a composite number.
            break
    else:
        print(userinput, "is a prime number.") #prints user input is a prime number.

#since 1 is neither prime or composite, it just prints that it is neither if they input 1.
elif userinput == 1:
    print("1 is neither prime or composite.")

else:
    print("Only positive integers are allowed.") #prints only positive integers are allowed.
