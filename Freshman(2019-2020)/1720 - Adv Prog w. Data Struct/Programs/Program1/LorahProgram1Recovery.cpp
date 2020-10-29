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
     int x;
     bool exit = 0;
     while(!exit){
	cout << "Please make a selection by entering the corresponding number and pressing enter: " << endl;
	cout << "1) View All Player Data" << endl;
	cout << "2) Search Player" << endl;
	cout << "3) Exit" << endl;
	cin >> x;
	cout << endl << endl;
	switch(x){
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
	      cout << "Invalid Entry" << endl;
	}	
  }
}
//function that will output sorted data

void dataOutput(bballData person[]){
    int x;
    dataSort(person);

        cout << left << setw(11) << "Name ";
        cout << left << setw(13) << "Position ";
        cout << left << setw(20) << "Minutes Played ";
        cout << left << setw(25) << "Field Goal Percentage ";
        cout << left << setw(33) << "3-point Field Goal Percentage ";
        cout << left << setw(25) << "Free Throw Percentage ";
        cout << left << setw(0) << "Fouls " << endl;

      for(int i=0; i < 10; i++){
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
//function that will sort the data base on touchdowns
void dataSort(bballData person[]){
	bballData temp;
	int i, j;
	for(i = 0; i < 9; i++){

		for(j = 0; j < 10 - i - 1; j++){
			if(person[j].minutes < person[j+1].minutes){
				temp = person[j];
				person[j] = person[j+1];
				person[j+1] = temp;
			}
		}
	}		
	
}
//function that will search and display the information of a specific player
void searchPlayer(bballData person[]){
	int i,x;
	cout << "ALL PLAYERS" << endl;
	for(int i=0; i < 10; i++){
		cout << i << ") ";
    		cout << person[i].name << endl;	
	}

	cout << endl << "Please input a number that corresponds with the player that youd like to view: ";
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

	cout << "Would you like to edit this data?" << endl << "1) Yes" << endl << "2) No" << endl;
	cin >> x;
	
	if(x != 1)
		return; 
	else
		dataEdit(person, i);
	

}
//function that allows us to edit the data of a player 
void dataEdit(bballData person[], int a){
	bool exit = 0;
	int x, p;
	while(!exit){
		cout << "What data would you like to edit: " << endl;
		cout << "1) Touchdowns" << endl << "2) Catches" << endl 
		<< "3) Passing Yards" << endl << "4) Receiving Yards" 
		<< endl << "5) Rushing Yards" << endl << "6) Exit to menu" <<  endl; 
		cin >> x;
	
		switch(x){
			case 1:{
				cout << "Please enter a new value: ";
				cin >> p;
				person[a].minutes = p;
				cout << "...Saved..." << endl;
				break;
			}
			case 2:{
				cout << "Please enter a new value: ";
				cin >> p;
				person[a].fgpercentage = p;
				cout << "...Saved..." << endl;
				break;
			}	
			case 3:{
				cout << "Please enter a new value: ";
				cin >> p;
				person[a].fgpercentage3 = p;
				cout << "...Saved..." << endl;
				break;
			}
			case 4:{
				cout << "Please enter a new value: ";
				cin >> p;
				person[a].ftpercentage = p;
				cout << "...Saved..." << endl;
				break;
			}
			case 5:{
				cout << "Please enter a new value: ";
				cin >> p;
				person[a].fouls = p;
				cout << "...Saved..." << endl;
				break;
			}
			default:
				exit = 1;
				break;
		}
	}	 
	
}
//fucntion that asks the user if they want to save their data to a datafile
void beforeExit(bballData person[]){
	int x;
	cout << "Before you exit, would you like to save the data to a new file?" << endl << "1) Yes" << endl << "2) No" << endl;
	cin >> x;

	if(x == 1){
		newFile(person);
	}
	else{
		cout << endl << "...Exiting..." << endl;
		return;
	}
}
//function that 
void newFile(bballData person[]){
	ofstream outfile;
	char filename[25];
	cout << "Please enter desired file name, ending in .txt: ";

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

      for(int i=0; i < 10; i++){
        outfile << left << setw(10) << person[i].name << " ";
        outfile << left << setw(15) << person[i].position << " ";
        outfile << right << setw(3) << person[i].minutes << " ";
        outfile << right << setw(9) << person[i].fgpercentage << " ";
        outfile << right << setw(12) << person[i].fgpercentage3 << " ";
        outfile << right << setw(10) << person[i].ftpercentage << " ";
        outfile << right << setw(10) << person[i].fouls << endl;
      }

	outfile.close();
	cout << "...Saved... Exiting..." << endl;
    
}
