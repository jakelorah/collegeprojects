#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = ["Braeden Thompson, Jake Lorah, Justin Weiss, Justin Ricc, Timothy Beal, Ashlyn Hanks, Cam Bortle, Alex McClellan"]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__rubric__ = "R1"

#Reads in input, checks to make sure it is valid, then splits it using the .split method.
def userInput():

    #Welcome text, directions on how to use the program, and an example.
    print ("Welcome to Jake Lorah's Program!\n")
    print ("Directions: Enter ^ for AND, v for OR, and > for IMPLIES. Please do not use the letter 'v' in your statement since 'v' is represented as OR in my program. Please include a space between all letters and symbols.\n")
    print ("Example: p v q\n")

    #Ask user for input, store in variable 'statement'.
    statement = input("Please enter a propositional statement: ")

    #Checks to make sure user input is valid.
    while statement.isdigit() == True:
        entry = input("Sorry, your input is invalid. Please try again: ")

    #Splits the statement, separates the letters from the connectives.
    separate = statement.split(" ")

    #Takes the lentgh of the user input.
    count = len(separate)

    x = 0
    num = 0 

    #Checks to see if the separated input consists of alphabetical letters. If it consists of a 'v', it removes that letter from the 'statement' since the v means OR in this case.
    for d in separate:
        if separate[num].isalpha() == True:
            x += 1
        if separate[num] == 'v':
            x -= 1
        num +=1

    truthTable(count, separate, x, statement)

#Output with the truth table.
#This stores all binary number values up to 7. I figured out that this was the easiest way to do this after trying many other ways.
def truthTable(count, separate, x, statement):
    finalTable = [[0 for i in range(3)] for j in range(8)]
    finalTable[7] = [1,1,1]
    finalTable[6] = [1,1,0]
    finalTable[5] = [1,0,1]
    finalTable[4] = [1,0,0]
    finalTable[3] = [0,1,1]
    finalTable[2] = [0,1,0]
    finalTable[1] = [0,0,1]
    finalTable[0] = [0,0,0]

    #If one letter is inputed.
    if x == 1:
        first = 1
        second = 2

        #Prints it on a new line.
        print("\n", separate[0].lower())

        # Depending on the binary numbers, either T or F is printed.
        while first >= 0:
            while second == 2:
                if finalTable[first][second] == 1:
                    print (" T")
                else:
                    print (" F")

                first -= 1

                if (first < 0):
                    break

    #If two letters are inputed.
    if x == 2:
        first = 3
        second = 1

        print("\n", separate[0].lower(), separate[2].lower(), statement.lower())

        while first >= 0:
            while second > 0 and second <= 2:
                
                if finalTable[first][second] == 1:
                    print(" T",end='')
                else:
                    print(" F",end='')
                
                if second == 1:
                    second += 1
                
                else:
                    # ignores the characters ' ^, v, >' and then prints out T or F depending on the binary.
                    if separate[1] == '^':
                        if finalTable[first][1] == 1 and finalTable[first][2] == 1:
                            print("   T",end='')
                        else:
                            print("   F",end='')

                    elif separate[1] == 'v':
                        if finalTable[first][1] == 1 or finalTable [first][2] == 1:
                            print("   T",end='')
                        else:
                            print("   F",end='')

                    elif separate[1] == '>':
                        if finalTable[first][1] == 0 or finalTable [first][2] == 1:
                            print("   T",end='')
                        else:
                            print("   F",end='')

                    print()

                    first-= 1
                    second-= 1

                if first < 0:
                    break

    #If three letters are inputed.
    if x == 3:
        first = 7
        second = 0


def main():
    #Calling userInput function.
    userInput()

if __name__ == "__main__":
    main()
