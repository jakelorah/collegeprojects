//Name: Jake Lorah
//Date: 9/2/20
//Class: CSC-2710-01 Adv Data Structures/Algo Dev
//Professor: Lloyd Williams
//File: program1.cpp
//Description: This program loads data into an array, sorts it using an exchange sort, and prints it out.

//Header that defines the standard input/output stream objects.
#include <iostream>

//Stream class to both read and write from/to files.
#include <fstream>

//Availability to use string/Declares string variables.
#include <string>

//Provides scope to the identifiers.
using namespace std;

//This struct called 'People' declares the variable age, as well as the strings 'firstName' and 'lastName' for the load and exchange sort functions.
struct People
{
    int age;
    string firstName;
    string lastName;
};

//This function called 'exchangeSort' performs the action of the sort.
void exchangeSort(int c, struct People names[]) //these parameters define variables that could be later called inside the function, as well as creating a struct with an array called names.
{
    int x;
    int y;
    struct People List; //adding 'List' inside the struct 'People'.
    string strLastname1;
    string strLastname2;

    //Calculations/Loop.
    for (x = 0; x < (c - 1); x++)
    {    
        for (y = (x + 1); y < c; y++)
        {
            strLastname1.assign(names[y].lastName);
            strLastname2.assign(names[x].lastName);
           
            if (strLastname1.compare(strLastname2) < 0)
            {
                List = names[y];

                names[y] = names[x];
                names[x] = List;
            }

            else if (strLastname1.compare(strLastname2) == 0)
            {
                if (names[y].firstName.compare(names[x].firstName) < 0)
                {
                    List = names[y];

                    names[y] = names[x];
                    names[x] = List;
                }
            }
        }
    }
}

//This function called 'load' opens up the specified data file and specifies that the first name, last name, and age are seperated by a space in between.
void load (struct People info[]) //these parameters call the 'People' struct again as well as the 'info' array to hold the fname/lname variables.
{
    ifstream input;

    input.open("data.txt"); //this is the name of my test data file.

    string firstName1;
    string lastName1;

    int a; //age variable.
    int x = 0;

    while (x < 9)
    {
        input >> firstName1 >> lastName1 >> a; //in the data file, this is the order. fname, lname, and then age with spaces in between.

        //Assigns the items in the data file with the correct variable.
        info[x].firstName = firstName1;
        info[x].lastName = lastName1;
        info[x].age = a;

        x++;
    }
}

//This function called 'print' produces the output file once the code is ran.
void print (struct People print[] ) //these parameters call the 'People' struct as well as the 'print' array to actually display the results.
{
    ofstream output;

    output.open("output.txt"); //this is the name of my output file when the code runs.

    int d;

    for (d = 0; d < 9; d ++)
    { 
       output << print[d].firstName << " " << print[d].lastName << " " << print[d].age << ".\n"; //adds spaces in between each element.
    }

    output.close(); //closes file.
}

//Main function which performs and loads the test run.
int main()
{
    struct People testrun[10];
    load(testrun);
    
    exchangeSort(9, testrun);
    print(testrun);

    return 0;
}
