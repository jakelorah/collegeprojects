//Name: Jake Lorah
//Date: 1/14/20
//Professor: Dr. Titus
//Program: Lorah-Lab1.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab1/Lorah-Lab1.cpp
//Description: This lab will provide a review of basic LINUX commands, the Ubuntu flavor of UNIX.

//Include statement for C++ programs.
#include <iostream>

//Provides scope to the identifiers.
using namespace std;

//Main function that contains what this program will accomplish..
int main() 
{
//Hello World in C++:

    //Title for this section of code.
    cout << "Hello World in C++:";

    //New line.
    cout << endl;

    //C++ version of a printf statement.
    cout << "Hello, World!";

    //Three new lines.
    cout << endl << endl << endl;



//Summer Income Calculator:

    //Title for this ection of code.
    cout << "Summer Income Calculator:";

    //New line.
    cout << endl;

    //Asks the user to enter its hourly rate and assigns that value to the variable hourlyrate.
    cout << "Please enter your hourly rate: ";
    float hourlyrate;
    cin >> hourlyrate;

    //Asks the user to enter the number of hours worked each of the 5 weeks and assigns each value to the specific week variable. Then I sum it all and assign the sum to the variable hours.
    cout << "Please enter the number of hours you worked during Week 1: ";
    int week1;
    cin >> week1;

    cout << "Please enter the number of hours you worked during Week 2: ";
    int week2;
    cin >> week2;

    cout << "Please enter the number of hours you worked during Week 3: ";
    int week3;
    cin >> week3;

    cout << "Please enter the number of hours you worked during Week 4: ";
    int week4;
    cin >> week4;

    cout << "Please enter the number of hours you worked during Week 5: ";
    int week5;
    cin >> week5;

    int hours;
    hours = week1 + week2 + week3 + week4 + week5;

    //New line.
    cout << endl;

    //Your income before and after taxes from your summer job.
    float incomebefore;
    incomebefore = hourlyrate * hours;
    cout << "Income before taxes: $";
    cout << incomebefore;

    //New line.
    cout << endl;

    float incomeafter;
    float totala;
    incomeafter = incomebefore * 0.14;
    totala = incomebefore - incomeafter;
    cout << "Income after taxes: $";
    cout << totala;

    //New line.
    cout << endl << endl;

    //The money you spend on clothes and other accessories.
    float clothes;
    clothes = totala * 0.10;
    cout << "The money you spend on clothes and other accessories: $";
    cout << clothes;

    //New line.
    cout << endl;

    //Prints current total.
    float totalclothes;
    totalclothes = totala - clothes;
    cout << "Remaining total: $";
    cout << totalclothes;

    //New line.
    cout << endl << endl;

    //The money you spend on school supplies.
    float schoolsupplies;
    schoolsupplies = totala * 0.01;
    cout << "The money you spend on school supplies: $";
    cout << schoolsupplies;

    //New line.
    cout << endl;

    //Prints current total.
    float totalschoolsupplies;
    totalschoolsupplies = totalclothes - schoolsupplies;
    cout << "Remaining total: $";
    cout << totalschoolsupplies;

    //New line.
    cout << endl << endl;

    //The money you spend to buy savings bonds.
    float savingsbonds;
    savingsbonds = totalschoolsupplies * 0.25;
    cout << "The money you spend to buy savings bonds: $";
    cout << savingsbonds;

    //New line.
    cout << endl;

    //Prints current total.
    float totalsavingsbonds;
    totalsavingsbonds = totalschoolsupplies - savingsbonds;
    cout << "Final Remaining total: $";
    cout << totalsavingsbonds;

    //New line.
    cout << endl << endl;

    //The money your parents spend to buy additional savings bonds for you.
    float additional;
    additional = savingsbonds * 0.50;
    cout << "The money your parents spend to buy additional savings bonds for you: $";
    cout << additional;

    //New line.
    cout << endl;

    return 0;
}
