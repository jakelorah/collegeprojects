//Name: Jake Lorah
//Date: 2/15/20
//Professor: Dr. Titus
//Program: LorahProgram1.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program1/LorahProgram1.cpp
//Description: This program defines a struct to store data about a basketball player (Player's Name, Position, Minutes Played, Field Goal Percentage, 3-point Field Goal Percentage, Free Throw Percentage, Fouls).

//Include statements:
#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

//Creating my struct called bballData.
struct bballData
{
     char name[30];
     string position;
     int minutes, fouls;
     double fgpercentage, fgpercentage3, ftpercentage;
};

//All of my function prototypes.
void menu(bballData*);
void dataInput(bballData*);
void dataOutput(bballData*);
void dataSort(bballData*);
void dataEdit(bballData*, int);
void beforeExit(bballData*);
void searchPlayer(bballData*);
void newFile(bballData*);

//Main program.
int main()
{
     cout << "Basketball Team Manager Data" << endl << endl;
     bballData players[10];
     dataInput(players);
     menu(players);
     beforeExit(players);
	
     return 0;
}

//Function called dataInput that will read in the input file BBData.txt.
void dataInput(bballData person[])
{
     int i;
     ifstream infile;
     infile.open("BBData.txt");

     for(i=0; i < 10; i++)
     {
       infile >> person[i].name;
       infile >> person[i].position >> person[i].minutes >> person[i].fgpercentage >> person[i].fgpercentage3 >> person[i].ftpercentage >> person[i].fouls;
     }

     infile.close();
}

//Function called menu that will be the main part of the program. Important for the navigation.
void menu(bballData person[])
{
     int input;
     bool exit = 0;//makes sure user does not exit or leave program.

     while(!exit)
     {
        cout << "Please type a corresponding number based on your needs and press enter when finished: " << endl;
	cout << "1- Display Data For All Players" << endl;
	cout << "2- Search For A Specific Player" << endl;
	cout << "3- Exit" << endl;
	cin >> input;
	cout << endl << endl;
	switch(input)//goes to certain case depending if user wants to see all data or specific player.
        {
	    case 1:
	      dataOutput(person);
	      break;
	    case 2:
	      searchPlayer(person);
	      break;
	    case 3:
	      exit = true;
	      return;
	    default :
	      cout << "This entry is invalid." << endl;
	}	
     }
}

//Function called dataOutput that will output all data.
void dataOutput(bballData person[])
{
     int i;
     dataSort(person);

     //setw sets the field width.
     cout << left << setw(11) << "Name ";
     cout << left << setw(13) << "Position ";
     cout << left << setw(20) << "Minutes Played ";
     cout << left << setw(25) << "Field Goal Percentage ";
     cout << left << setw(33) << "3-point Field Goal Percentage ";
     cout << left << setw(25) << "Free Throw Percentage ";
     cout << left << setw(0) << "Fouls " << endl;

     for(i=0; i < 10; i++)
     {
        cout << left << setw(10) << person[i].name << " ";
        cout << left << setw(12) << person[i].position << " ";
        cout << left << setw(19) << person[i].minutes << " ";
        cout << left << setw(24) << person[i].fgpercentage << " ";
        cout << left << setw(32) << person[i].fgpercentage3 << " ";
        cout << left << setw(24) << person[i].ftpercentage << " ";
        cout << left << setw(10) << person[i].fouls << endl << endl;
     }
	cout << endl;
}

//Function called dataSort that will sort all of the data based on the number of minutes played.
void dataSort(bballData person[])
{
     bballData temp;
     int i, j;

     for(i = 0; i < 9; i++)
     {
        for(j = 0; j < 10 - i - 1; j++)
        {
	   if(person[j].minutes < person[j + 1].minutes)
              {
	         temp = person[j];
		 person[j] = person[j + 1];
		 person[j + 1] = temp;
	      }
	}
     }			
}

//Function called searchPlayer that will search for a specific player and output the data for him/her.
void searchPlayer(bballData person[])
{
     int i,x;
     cout << "All players:" << endl;
	
     for(int i=0; i < 10; i++)
     {
        cout << i << "- ";
        cout << person[i].name << endl;	
     }

     cout << endl << "Please type the number of the corresponding player that you would like to view and press enter when finished: ";
     cin >> i;
     cout << endl;

     cout << left << setw(11) << "Name ";
     cout << left << setw(13) << "Position ";
     cout << left << setw(20) << "Minutes Played ";
     cout << left << setw(25) << "Field Goal Percentage ";
     cout << left << setw(33) << "3-point Field Goal Percentage ";
     cout << left << setw(25) << "Free Throw Percentage ";
     cout << left << setw(0) << "Fouls " << endl;

     cout << left << setw(10) << person[i].name << " ";
     cout << left << setw(12) << person[i].position << " ";
     cout << left << setw(19) << person[i].minutes << " ";
     cout << left << setw(24) << person[i].fgpercentage << " ";
     cout << left << setw(32) << person[i].fgpercentage3 << " ";
     cout << left << setw(24) << person[i].ftpercentage << " ";
     cout << left << setw(10) << person[i].fouls << endl << endl;

     cout << "Do you want to update a piece of this data?" << endl << "1- Yes" << endl << "2- No" << endl;
     cin >> x;
	
     if(x != 1)
        return; 
     else
        dataEdit(person, i);//goes to function dataEdit.
}

//Function called dataEdit that will update the data piece we specify.
void dataEdit(bballData person[], int a)
{
     bool exit = 0;
     int x, p;
     while(!exit)
     {
        cout << "What piece of data do you want to update: " << endl;
	cout << "1- Minutes Played" << endl << "2- Field Goal Percentage" << endl << "3- 3-point Field Goal Percentage" << endl << "4- Free Throw Percentage" << endl << "5- Fouls" << endl << "6- Exit" <<  endl; 
        cin >> x;
	
        switch(x)//goes to certain case depending on type of data he/she wants to change.
        {
           case 1:
           {
	      cout << "Please enter the updated value: ";
	      cin >> p;
	      person[a].minutes = p;
	      cout << "Saved!" << endl;
	      break;
           }

	   case 2:
           {
	      cout << "Please enter the updated value: ";
	      cin >> p;
	      person[a].fgpercentage = p;
	      cout << "Saved" << endl;
	      break;
	   }
	
           case 3:
           {
	      cout << "Please enter the updated value: ";
	      cin >> p;
	      person[a].fgpercentage3 = p;
	      cout << "Saved" << endl;
	      break;
	   }

           case 4:
           {
	      cout << "Please enter the updated value: ";
	      cin >> p;
	      person[a].ftpercentage = p;
	      cout << "Saved" << endl;
	      break;
	   }

	   case 5:
           {
              cout << "Please enter the updated value: ";
	      cin >> p;
	      person[a].fouls = p;
	      cout << "Saved" << endl;
	      break;
	   }

           default:
              exit = 1;
	      break;
	   };
        }	 
}

//Function called beforeExit that will ask the user if they would like to save their data to a seperate data file.
void beforeExit(bballData person[])
{
     int x;
     cout << "Before you leave, would you like to save your data to a new data file?" << endl << "1- Yes" << endl << "2- No" << endl;
     cin >> x;

     if(x == 1)
     {
        newFile(person);//goes to function newFile.
     }
     else
     {
        cout << endl << "Goodbye!" << endl;
	return;
     }
}

//Function called newFile that will create the new data file for the user. 
void newFile(bballData person[])
{
     ofstream outfile;
     char filename[25];
     cout << "Please enter the new data file name. It must end in .txt: ";

     cin >> filename;
     outfile.open(filename);
     dataSort(person);

     outfile << left << setw(11) << "Name ";
     outfile << left << setw(13) << "Position ";
     outfile << left << setw(12) << "Minutes Played ";
     outfile << left << setw(11) << "Field Goal Percentage ";
     outfile << left << setw(12) << "3-point Field Goal Percentage ";
     outfile << left << setw(10) << "Free Throw Percentage ";
     outfile << left << setw(10) << "Fouls " << endl;

     for(int i=0; i < 10; i++)
     {
        outfile << left << setw(10) << person[i].name << " ";
        outfile << left << setw(15) << person[i].position << " ";
        outfile << right << setw(3) << person[i].minutes << " ";
        outfile << right << setw(9) << person[i].fgpercentage << " ";
        outfile << right << setw(12) << person[i].fgpercentage3 << " ";
        outfile << right << setw(10) << person[i].ftpercentage << " ";
        outfile << right << setw(10) << person[i].fouls << endl;
      }

     outfile.close();

     cout << "File is saved! Goodbye!" << endl;
}
