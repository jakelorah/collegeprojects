#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = [""]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"

# define your functions here

print("What is the quantifier that you want to use?\n")
print("Example: 'u' for universal and 'e' for existential)\n")
print("Quantifier that you want to use:")
quantifier = input()
if function.isalpha() == False:
    first, second, third = function.split(' ')

    if first.isdigit() == True:
        problem = first
        variable = third

    elif third.isdigit() == True:
        variable = first
        problem = third
    second = function


def main():
    #call your functions here

#if __name__ == "__main__":
    main()
