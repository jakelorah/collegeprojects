//Name: Jake Lorah 
//Date: 4/28/20
//Professor: Dr. Titus
//Program: LorahProgram5.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program5/LorahProgram5/LorahProgram5.cpp
//Description: Write a program that implements a Card Guessing Game.

//Include Statements:
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct playingCard //creates struck called playingCard which holds the value and suit of the card.
{
     string suit;
     int value;
};

void createDeck(vector<playingCard> &deck); //prototype - using a vector to create a deck of cards.

//Main Program:
int main()
{
     vector<playingCard> deck(52); //initializes vector to 52.
     createDeck(deck); //creates it.

     bool cont = true; // bool variable which runs program.
     int userOption;

     string suitChoice;
     int valueChoice;
 
     //Welcome Title:
     cout << endl;
     cout << "----------------------------" << endl;
     cout << "Welcome to Jake's Card Game!" << endl;
     cout << "----------------------------" << endl << endl;

     while(cont == true) //runs program if cont is true.
     {
          random_shuffle(deck.begin(), deck.end()); //shuffles the deck.
     
          //Gives the user options to choose from:
          cout << "1- Guess the suit" << endl;
          cout << "2- Guess the card value" << endl;
          cout << "3- Guess both" << endl;
          cout << "Please enter a number depending on what you would like to do: ";
          cin >> userOption;

          //If the user chooses option 1:
          if(userOption == 1)
          {
               cout << endl;
               cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
               cout << "- Hearts" << endl;
               cout << "- Diamonds" << endl;
               cout << "- Spades" << endl;
               cout << "- Clubs" << endl;
               cout << "Please make your guess (Enter a suite. Spell exactly as it is shown): ";
               cin >> suitChoice; //takes input from user based on options above and assigns it to suitChoice.
             
               cout << endl;
   
               //If the users guess and the answer match, display congrats message.
               if (suitChoice == deck[0].suit)
                    cout << "Congratulations! You guessed the card correctly!" << endl;
          
               //If the users guess and the answer do not match, display sorry message.
               else
                    cout << "You guessed incorrectly. Sorry!" << endl;
               
               //Tells the user what the correct card was.
               cout << "The card you were trying to guess was: ";

                    //Calculations to see what the correct card was and display it.
                    if(deck[0].value == 1)
                         cout << "Ace of " << deck[0].suit << endl;
                    else if(deck[0].value == 10)
                         cout << "Ten of " << deck[0].suit << endl;
                    else if(deck[0].value == 11)
                         cout << "Jack of " << deck[0].suit << endl;
                    else if(deck[0].value == 12)
                         cout << "Queen of " << deck[0].suit << endl;
                    else if(deck[0].value == 13)
                         cout << "King of " << deck[0].suit << endl;
                    else
                         cout << deck[0].value << " of " << deck[0].suit << endl;
          }

          //If the user chooses option 2:
          else if(userOption == 2)
          {
               cout << endl;
               cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
               cout << "*Ace is 1, Jack is 11, Queen is 12, King is 13*" << endl << endl;
               cout << "1  2  3  4  5  6  7  8  9  10  11  12  13" << endl;
               cout << "Please make your guess (Enter a number): ";
               cin >> valueChoice; //takes input from user based on options above and assigns it to valueChoice.

               cout << endl;

               //If the users guess and the answer match, display congrats message.
               if (valueChoice == deck[0].value)
                    cout << "Congratulations! You guessed the card correctly!" << endl;

               //If the users guess and the answer do not match, display sorry message.
               else
                    cout << "You guessed incorrectly. Sorry!" << endl;

               //Tells the user what the correct card was.               
               cout << "The card you were trying to guess was: ";
               
                    //Calculations to see what the correct card was and display it.     
                    if(deck[0].value == 1)
                         cout << "Ace of " << deck[0].suit << endl;
                    else if(deck[0].value == 10)
                         cout << "Ten of " << deck[0].suit << endl;
                    else if(deck[0].value == 11)
                         cout << "Jack of " << deck[0].suit << endl;
                    else if(deck[0].value == 12)
                         cout << "Queen of " << deck[0].suit << endl;
                    else if(deck[0].value == 13)
                         cout << "King of " << deck[0].suit << endl;
                    else
                         cout << deck[0].value << " of " << deck[0].suit << endl;
          }

          //If the user chooses option 3:
          else if(userOption == 3)
          {
               cout << endl;
               cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
               cout << "*Ace is 1, Jack is 11, Queen is 12, King is 13*" << endl << endl;;
               cout << "1  2  3  4  5  6  7  8  9  10  11  12  13" << endl;
               cout << "Please make your guess (Enter a number): ";
               cin >> valueChoice; //takes input from user based on options above and assigns it to valueChoice.
               
               cout << endl;
               cout << "-------------------------------------------" << endl << endl;
 
               cout << "- Hearts" << endl;
               cout << "- Diamonds" << endl;
               cout << "- Spades" << endl;
               cout << "- Clubs" << endl;
               cout << "Please make your guess (Enter a suite. Spell exactly as it is shown): ";
               cin >> suitChoice; //takes input from user based on options above and assigns it to suitChoice.

               cout << endl;

               //If the users guess and the answer match, display congrats message.
               if(valueChoice == deck[0].value && suitChoice == deck[0].suit)
                    cout << "Congratulations! You guessed the card correctly!" << endl;

               //If the users guess and the answer do not match, display sorry message.
               else
                    cout << "You guessed incorrectly. Sorry!" << endl;

               //Tells the user what the correct card was.  
               cout << "The card you were trying to guess was: ";
     
                    //Calculations to see what the correct card was and display it.
                    if(deck[0].value == 1)
                         cout << "Ace of " << deck[0].suit << endl;
                    else if(deck[0].value == 10)
                         cout << "Ten of " << deck[0].suit << endl;
                    else if(deck[0].value == 11)
                         cout << "Jack of " << deck[0].suit << endl;
                    else if(deck[0].value == 12)
                         cout << "Queen of " << deck[0].suit << endl;
                    else if(deck[0].value == 13)
                         cout << "King of " << deck[0].suit << endl;
                    else
                         cout << deck[0].value << " of " << deck[0].suit << endl;
          }

          //Error message is displayed if something other than 1, 2, or 3 is inputed.
          else
          {
               cout << endl;
               cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
               cout << "Error: You have entered something that is not 1, 2, or 3. Please try again." << endl << endl;
               continue;
          }

     //Asks the user if they want to keep playing.
     cout << endl;
     cout << "---------------------------------------------------------------------------------------------------" << endl << endl;
     cout << "1- Yes" << endl;
     cout << "2- No" << endl;
     cout << "Would you like to continue playing? Please enter a number depending on what you would like to do: ";
     cin >> userOption;
     cout << endl;
     cout << "---------------------------------------------------------------------------------------------------" << endl << endl;

     //If user inputs 2, that means they want to quit. This closes the program.
     if(userOption == 2)
          cont = false;
     //If user inputs 1, that means they want to continue playing. This goes back to cont = true from the beginning.
     else
          cont = true;
     }

return 0;

}

//Function for creating the deck.
void createDeck(vector<playingCard> &deck)
{
     int val = 0;
     
     for(int x = 1; x < 5; x++)
     {
          for(int y = 1;y < 14; y++)
          {
               //Determines which suit to put in the card. The y affects the value of each card.
               switch(x)
               {
                    case 1:
                         deck[val].suit = "Hearts";
                         deck[val].value = y;
                         break;
                    case 2:
                         deck[val].suit = "Spades";
                         deck[val].value = y;
                         break;
                    case 3:
                         deck[val].suit = "Diamonds";
                         deck[val].value = y;
                         break;
                    case 4:
                         deck[val].suit = "Clubs";
                         deck[val].value = y;
                         break;
               }

               val ++; //increases val by 1 each time until 52 (max) is reached.
          }
     }
}
