//Name: Jake Lorah
//Date: 4/13/20
//Professor: Dr. Titus
//Program: LorahProgram3.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program3/LorahProgram3.cpp
//Description: Program 3 – Recursive Power Function.

#include <iostream>

using namespace std;

//Recursive Function:
int Repower(int j, int k)
{
     if(k == 0)
          return 1;
     
     else if(k == 1)
          return j;
     
     else if(k < 0) //when k is negative, it's fixed to positive.
     {
          k = k*-1; //multiplying it by -1 makes it positive.
          return Repower(j,k);
     }
    
     else
          return j * Repower(j, k-1);
}

//Main Function:
int main()
{
     int j, k;
     int userinput;

     cout << endl;

     //Welcome message.
     cout << "Welcome To My Power Calculator! Enjoy :)" << endl;
     cout << "----------------------------------------" << endl << endl;

     //Give the user options to choose from.
     do
     {
          cout << "What would you like to do?" << endl << endl;
          cout << "1- Calculate" << endl;
          cout << "2- Exit" << endl << endl;
          cout << "Please make a selection: ";
          cin >> userinput;
          cout << endl << "---------------------------------------------------------" << endl;

          //Asks to enter values for J and k if option 1 is selected.
          if(userinput == 1)
          {
               cout << endl;
               cout << "J^k will be the calculation..." << endl << endl;
               cout << "Please enter J: ";
               cin >> j;
               cout << "Please enter k: ";
               cin >> k;
              
               if(k < 1) //test if k is negative, then put it under 1.
               {
                    cout << endl << "Answer = 1/" << Repower(j,k) << endl;
                    cout << endl << "---------------------------------------------------------" << endl;
               }
               
               else
               {
                    cout << endl << "Answer = " << Repower(j,k) << endl;
                    cout << endl << "---------------------------------------------------------" << endl;
               }
          }
        
          cout << endl;
     }

     while(userinput != 2); //perform all of these actions only if option 1 is selected.

     return 0;
}
