//Name: Jake Lorah
//Date: 1/28/20
//Professor: Dr. Titus
//Program: LorahLab3.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab3/LorahLab3.cpp
//Description: Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle’s radius, diameter, circumference, and area.

//Original include statement for C++ code.
#include <iostream>

//Include statement that declares mathematical operations.
#include<cmath>

//Include statement mainly for the setprecision function.
#include<iomanip>
 
using namespace std;
 
//Declaring the functions I will be using below.
double distance(double x1, double x2, double y1, double y2);
double radius(double x1, double x2, double y1, double y2);
double circumference(double r);
double area(double r);
void PrintResults(double r);

//Declare the variable PI to equal 3.1416 to easily reference it.
double PI = 3.1416;

//Main function.
int main()
{
    //Declaring double variables for x and y cordinates of circle.
    double x1;
    double x2;
    double y1;
    double y2;
	 
    //Asking the user to enter x and y cordinates of the center of the circle and assigning it to variables x1 and y1.
    cout<<"Enter the x and y cordinates of center of the circle (Ex: 1 3): ";
    cin>>x1>>y1;
    
    //Asking the user to enter x and y cordinates of a point on the circle and assigning it to variables x2 and y2.
    cout <<endl<<"Enter the x and y coordinates of a point on the circle (Ex: 2 4): ";
    cin>>x2>>y2;
    
    //Assigning the radius to the variable r to make it easier to reference.
    double r = radius( x1,  x2,  y1,  y2);
    PrintResults (r);
   
}

//Function distance:
double distance(double x1, double x2, double y1, double y2)
{         
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));                    
}

//Function radius:
double radius(double x1, double x2, double y1, double y2)
{
    return distance(x1, x2, y1, y2);                                   
}

//Function circumference:
double circumference(double r)
{
    return 2 * PI * r;
}

//Function area:
double area(double r)
{
    return PI * pow(r, 2);
}

//Function PrintResults:
void PrintResults(double r)
{
    //Prints out the results based on the variable r I created above.
    cout<<endl<<"Radius = "<<fixed<<setprecision(2)<<r<<endl;
    cout<<"Diameter = "<<2 * r<<endl;
    cout<<"Circumference = "<<circumference(r)<<endl;
    cout<<"Area = "<<area(r)<<endl;
}    
