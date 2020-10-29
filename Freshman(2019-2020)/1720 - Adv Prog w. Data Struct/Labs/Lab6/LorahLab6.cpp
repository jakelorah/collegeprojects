//Name: Jake Lorah
//Date: 2/20/20
//Professor: Dr. Titus
//Program: LorahLab6.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab6/LorahLab6.cpp
//Description: This test program is used to implement the class that was described in the lab directions.

//Include statements:
#include <iostream>
#include <iomanip>
#include "counterType.h"

using namespace std;

int main()
{
     counterType ctype, ctype2(15);
     int test;

     cout << "Constructor with value" << endl;
     ctype2.displayCounter();
     cout << endl;

     cout << "Constructor with no value" << endl;
     ctype.displayCounter();
     cout << endl;

     cout << "Initialize Counter" << endl;
     cout << test << endl;

     cout << "Set Counter" << endl;
     ctype.setCounter(256);
     test = ctype.getCounter();
     cout << test << endl;

     cout << "Get Counter" << endl;
     test = ctype.getCounter();
     cout << test << endl;

     cout << "Increment Counter" << endl;
     ctype.incrementCounter();
     test = ctype.getCounter();
     cout << test << endl;

     cout << "Decrement Counter" << endl;
     ctype.decrementCounter();
     test = ctype.getCounter();
     cout << test << endl;

     cout << "Display Counter" << endl;
     ctype.displayCounter();
     cout << endl;

     return 0;
}



