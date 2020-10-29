#!/usr/bin/env python3

__author__ = "Jake Lorah"
__copyright__ = "Copyright 2020"
__credits__ = [""]
__license__ = "GPLv3"
__version__ = "0.0.0"
__maintainer__ = "Jake Lorah"
__email__ = "jlorah@highpoint.edu"
__status__ = "Development"
__Description__ = "The purpose of this work is to implement programmatic logic such that a user can enter a set or sets, an assignment of elements, select from possible function types, and have the program determine whether the given element assignments are valid."


#userInput function which asks the user to enter set 1 and 2 and checks to see if it is alpha or numeric. If not, an error is displayed.
def userInput():
    set1 = input("Please enter set 1 (Example: 1 2 3): ").split(" ")
    set2 = input("Please enter set 2 (Example: a b c): ").split(" ")

    #for loop that checks each character in set 1 and makes sure it is either alpha or numeric.
    alphacount = 0
    digitcount = 0
    for i in range(0, len(set1)):
        #if characters are entered that are not alpha or numeric, an error is displayed.
        if (set1[i].isalpha() == False and set1[i].isdigit() == False):
            print("Sorry, you entered a character that is not a letter or number in set 1. Please try again.")
            break

        elif(set1[i].isalpha() == True):
            alphacount += 1

        elif(set1[i].isdigit() == True):
            digitcount += 1

    #prints an error when you have a mix of letters and numbers in set 1.
    if (digitcount > 0 and alphacount > 0):
        print("Sorry, you entered both letters and numbers in set 1. Please try again.")


    #for loop that checks each character in set 2 and makes sure it is either alpha or numeric.
    alphacount = 0
    digitcount = 0
    for i in range(0, len(set2)):
        #if characters are entered that are not alpha or numeric, an error is displayed.
        if (set2[i].isalpha() == False and set2[i].isdigit() == False):
            print("Sorry, you entered a character that is not a letter or number in set 2. Please try again.")
            break

        elif(set2[i].isalpha() == True):
            alphacount += 1

        elif(set2[i].isdigit() == True):
            digitcount += 1

    #prints an error when you have a mix of letters and numbers in set 2.
    if (digitcount > 0 and alphacount > 0):
        print("Sorry, you entered both letters and numbers in set 2. Please try again.")

    #construction of the menu.
    print("\n1) One-to-One")
    print("2) Onto")
    functiontype = input("Please enter 1 or 2 for a function type: ")
    
    #if input does not equal 1 or 2, an error is displayed.
    if functiontype != '1' and functiontype != '2':
        functiontype = input("Sorry, you entered a number other than 1 or 2 for the function type. Please try again. ")
    
    return set1, set2, functiontype


#check function that checks to see if set 1 has more characters than set 2. Hence, it not being a valid one-to-one or onto function.
def Check(set1, set2, functiontype):
    check = True

    if functiontype == '1':
        if len(set1) > len(set2):
            check = False
    else:
        if len(set2) >= len(set1):
            check = False
     
    return check       
        

#menu function that performs calculations if the given set is in the correct format/number of characters based on the check function.
def Menu():
    
    test = True
    while (test == True):
        set1, set2, functiontype = userInput()
       
        #if user inputs 1, calculations are computed. However, if check comes back false, meaning there are more elements in set 1 than set 2, an error is displayed.
        if functiontype == '1':
            check = Check(set1, set2, functiontype)

            if check == False:
                print("Sorry, can't assign one-to-one function type. You have more elements in set 1 than set 2.")
                
            
            else:
                #top number in range is less than but NOT equal to.
                for i in range(0, len(set1)):
                    print(set1[i], " -> " ,set2[i])
            
            
        #if user inputs 2, calculations are computed. However, if check comes back false, meaning there are more or the same amount of elements in set 2 than set 1, an error is displayed. 
        elif functiontype == '2':    
            check = Check(set1, set2, functiontype)

            if check == False:
                print("Sorry, can't assign onto function type. You have more or the same amount of elements in set 2 than set 1.")

            else:
                j=0
                for i in range(0, len(set1)):
                    print(set1[i], " -> " ,set2[j])
                    j+= 1

                    if (j >= len(set2)):
                        j=0
          
        #asks the user at the end if they would like to continue or exit the program.
        print("\nWould you like to try another function or quit? (y/n)")
        quit = input()
        print("\n")

        if quit == "n":
            test = False

def main():
    Menu()


if __name__ == "__main__":
    main()

