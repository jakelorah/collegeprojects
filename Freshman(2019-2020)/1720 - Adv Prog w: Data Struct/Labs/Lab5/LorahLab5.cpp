//Name: Jake Lorah
//Date: 2/11/20
//Professor: Dr. Titus
//Program: LorahLab5.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab5/LorahLab5.cpp
//Description: This test program is used to fully test the functionality of the class clockType.

//Include statements:
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Creating a class called clockType that holds various public and private functions within.
class clockType
{
public:
     void setTime(int, int, int);
     void getTime(int&, int&, int&) const;
     void printTime() const;
     void incrementSeconds();
     void incrementMinutes();
     void incrementHours();
     bool equalTime(const clockType&) const;
private:
     int hr;
     int min;
     int sec;
};

//Main function:
int main()
{
     //Tests:
     //1: Retrieve and print time for clock 1 and clock 2.
     //2: Checking to see if both times are equal.
     //3: Incrementing hours, minutes, and seconds for each time.

     //Creating clock 1 and clock 2 within clockType class.
     clockType clock1;
     clockType clock2;

     int hours;
     int minutes;
     int seconds;

     //Set time for clock1 and clock 2.
     clock1.setTime(5, 4, 30);
     clock2.setTime(5, 45, 16);

     //getTime Function Test:
     cout << "getTime Function:";
     cout << endl;

     clock1.getTime(hours, minutes, seconds);
     cout << "Clock One: Hours = " << hours << ", Minutes = " << minutes << ", Seconds = " << seconds << endl;

     clock2.getTime(hours, minutes, seconds);
     cout << "Clock Two: Hours = " << hours << ", Minutes = " << minutes << ", Seconds = " << seconds << endl << endl;

     //printTime Function Test:
     cout << "printTime Function:";
     cout << endl;

     cout << "Clock One: ";
     clock1.printTime();
     cout << endl;

     cout << "Clock Two: ";
     clock2.printTime();
     cout << endl << endl;

     //equalTime Function Test:
     cout << "equalTime Function:";
     cout << endl;

     if (clock1.equalTime(clock2))
          cout << "Clock One and Clock Two are equal." << endl;

     else
          cout << "Clock One and Clock Two are not equal." << endl << endl;

     //Incrementation Test:
     cout << "Incrementation:";
     cout << endl;

     //Clock 1:
     clock1.incrementSeconds();

     cout << "After incrementing Clock One by " << "one second: ";     
     clock1.printTime();
     cout << endl;

     clock1.getTime(hours, minutes, seconds);

     clock1.setTime(hours, minutes, seconds);

     clock1.incrementMinutes();

     cout << "After incrementing Clock One by " << "one minute: ";
     clock1.printTime();
     cout << endl;

     clock1.getTime(hours, minutes, seconds);

     clock1.setTime(hours, minutes, seconds);

     clock1.incrementHours();

     cout << "After incrementing Clock One by " << "one hour:   ";
     clock1.printTime();
     cout << endl << endl;

     //Clock 2:
     clock2.incrementSeconds();

     cout << "After incrementing Clock Two by " << "one second: ";
     clock2.printTime();
     cout << endl;

     clock2.getTime(hours, minutes, seconds);

     clock2.setTime(hours, minutes, seconds);

     clock2.incrementMinutes();

     cout << "After incrementing Clock Two by " << "one minute: ";
     clock2.printTime();
     cout << endl;

     clock2.getTime(hours, minutes, seconds);

     clock2.setTime(hours, minutes, seconds);

     clock2.incrementHours();

     cout << "After incrementing Clock Two by " << "one hour:   ";
     clock2.printTime();
     cout << endl;

     return 0;
}     
    
//This function simplifies the variable names and grabs the time.
void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
     hours = hr;
     minutes = min;
     seconds = sec;
}

//This function prints out the time in the correct format.
void clockType::printTime() const
{
     if (hr < 10)
          cout << "0";
     cout << hr << ":";

     if (min < 10)
          cout << "0";
     cout << min << ":";

     if (sec < 10)
          cout << "0";
     cout << sec;
}

//This function increments the hours.
void clockType::incrementHours()
{
     hr++;
     if (hr > 23)
          hr = 0;
}

//This function increments the minutes.
void clockType::incrementMinutes()
{
     min ++;
     if (min > 59)
     {
          min = 0;
          incrementHours();
     }
}

//This function increments the seconds.
void clockType::incrementSeconds()
{
     sec++;

     if (sec > 59)
     {
          sec = 0;
          incrementMinutes();
     }
}

//This function checks to see if both times are equal.
bool clockType::equalTime(const clockType& otherClock) const
{
     return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

//This function sets the time at the start for each clock, as long as it is a valid time format.
void clockType::setTime(int hours, int minutes, int seconds)
{
     if(0 <= hours && hours < 24)
          hr = hours;
     else
          hr = 0;

     if (0 <= minutes && minutes < 60)
          min = minutes;
     else
          min = 0;

     if (0 <= seconds && seconds < 60)
          sec = seconds;
     else
          sec = 0;
}
