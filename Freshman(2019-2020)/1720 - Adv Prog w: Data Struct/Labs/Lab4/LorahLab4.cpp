//Name: Jake Lorah
//Date: 2/4/20
//Professor: Dr. Titus
//Program: LorahLab4.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab4/LorahLab4.cpp
//Description: This program processes test data and outputs the answers.

//Basic include statement for cin and cout and other functions.
#include <iostream>

//Include statement for declaring string variables.
#include <string>

//Include statement for ifstream which is necessary for reading in a  file.
#include <fstream>

//Provides scope to the identifiers.
using namespace std;

//Creating two constant ints with the number of questions and number of students.
const int NumOfQuestions = 20;
const int NumOfStudents = 4;

//Function declaration for readFile which reads in the file and checks if it is reachable.
void readFile(ifstream& inFile);

//Function declaration for checkTest which checks to see if the users answers match up with the correct answers (first line of data file).
void checkTest(char studentAnswers[][NumOfQuestions], string studentIDs[], char correctAnswers[]);

//Function declaration for letterPercentGrade which prints the percent score and the letter grade under it.
char letterPercentGrade(int score);

//Main function:
int main()
{
     //String array that contains the variable NumOfQuestions which equals 20.
     string studentIDs[NumOfQuestions];
    
     //Char array that contains the variables correctAnswers and NumOfQuestions from the function checkTest.
     char correctAnswers[NumOfQuestions + 1];

     //Char array that contains the number of students (4) and number of questions (20).
     char studentAnswers[NumOfStudents][NumOfQuestions];

     //Reads in the file.
     ifstream inFile;
     readFile(inFile);
    
     //Reads in the correct answers first. The .getline function reads a string from an input stream. It extracts the characters which is super helpful.
     inFile.getline(correctAnswers, 21);
    
     //For loop that reads in the student ID's and answers. Also the extraction operator >> needs to be used to extract the data.
     for (int i = 0; i < NumOfStudents; i++) {
          inFile >> studentIDs[i]; //Extracts the student ID's.
          inFile.get(); //Gets rid of the space between the Student ID and his/hers answers.
          
          //For loop that grabs the students answers from the same line ([i][j]) and prints it next to its ID number.
          for (int j = 0; j < NumOfQuestions; j++)
               studentAnswers[i][j] = inFile.get();
     } 
    
     //Calls the function checkTest in the main function.
     checkTest(studentAnswers, studentIDs, correctAnswers);
    
     return 0;
}

//Function checkTest:
void checkTest(char studentAnswers[][NumOfQuestions], string studentIDs[], char correctAnswers[]) {
     
     //For loop that prints Student ID: 'i', which is the first value of the studentAnswers array.
     for (int i = 0; i < NumOfStudents; i++) {
          cout << "Student ID: " << studentIDs[i] << endl;

          int score = 0;
          cout << "Answers: ";
         
          //For loop that prints out the students answers.
          for (int j = 0; j < NumOfQuestions; j++) {
               cout << studentAnswers[i][j];
            
               //If statement that determines if the students answer matches up with the correct answer.
               if (studentAnswers[i][j] == correctAnswers[j])
                    score += 2; // Correct answer
               else if (studentAnswers[i][j] != correctAnswers[i] && studentAnswers[i][j] != ' ')
                    score -= 1; // Incorrect answer but not a blank
        }
        if (score < 0)
            score = 0; // Don't allow for minus scores
    
        cout << endl;
        char grade = letterPercentGrade(score);
        cout << "Grade: " << grade << endl << endl;
    }
}

//Function letterPercentGrade that prints out the letter grade based on the percent score.
char letterPercentGrade(int score) {    
     double percentScore = static_cast<double>(score) / (NumOfQuestions * 2);
     cout << "Score: " << percentScore*100 << "%" << endl;
     
     if (percentScore >= 0.9)
          return 'A';
     else if (percentScore >= 0.8)
          return 'B';
     else if (percentScore >= 0.7)
          return 'C';
     else if (percentScore >= 0.6)
          return 'D';
     else
          return 'F';
}

//Function readFile that checks to see if the file path is accurate, and if it is not accurate, it prints our an error message and exits the program.
void readFile(ifstream& inFile) {
    inFile.open("/home/students/jlorah/csc1720/Labs/Lab4/input.txt");
    if (!inFile){
        cout << "There was an error opening the input file" << endl;
        exit (EXIT_FAILURE);
    }
}
