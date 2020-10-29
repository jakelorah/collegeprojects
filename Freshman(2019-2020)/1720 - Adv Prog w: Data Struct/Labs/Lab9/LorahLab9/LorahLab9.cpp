//Name: Jake Lorah
//Date: 3/31/20
//Professor: Dr. Titus
//Program: LorahLab9.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab9/LorahLab9/LorahLab9.cpp
//Description: Test Program.

//#Include statements:
#include <iostream>
#include <string>
#include "arrayListType.h"
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
     unorderedArrayListType array1;
     bool out;
     int a, b, c;

//Welcome Message:	
     cout << endl;
     cout << "Are you ready to test an unordered array? I'm ready! Let's do it!" << endl;
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #1: Check if the array is empty.	
     cout << "Test #1: Check if the array is empty." << endl << endl;

     cout << "Before Test: array1.isEmpty" << endl << endl;
     cout << "After Test: ";
 
     out = array1.isEmpty();
     if(out == true)
        cout << "The array is empty." << endl;
     else 
        cout << "The array is not empty." << endl;
     
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #2: Test the remove function from an empty list.	
     cout << "Test #2: Test the remove function from an empty list." << endl << endl;

     cout << "Before Test: array1.remove(5)" << endl << endl;
     cout << "After Test: ";

     array1.remove(5); //can be any number. Does not matter because you can't delete from empty list.
     
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #3: Test the removeAll function from an empty list.
     cout << "Test #3: Test the removeAll function from an empty list." << endl << endl;

     cout << "Before Test: array1.removeAll(2)" << endl << endl;
     cout << "After Test: ";

     array1.removeAll(2); //can be any number. Does not matter because you can't delete from empty list.
     
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #4: Test the insertAt function to add a member into an array.
     cout << "Test #4: Test the insertAt function to add a member into an array." << endl << endl;

     cout << "Before Test: array1.insertAt(0,4)" << endl << endl;;
     cout << "After Test: ";

     array1.insertAt(0,4);
     array1.print();
	
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #5: Test the insertAt function to add three more members into the array.
     cout << "Test #5: Test the insertAt function to add three more members into the array." << endl << endl;

     cout << "Before Test: array1.insertAt(1,7)" << endl;
     cout << "             array1.insertAt(2,12)" << endl;
     cout << "             array1.insertAt(3,42)" << endl << endl;
     cout << "After Test: ";

     array1.insertAt(1,7);
     array1.insertAt(2,12);
     array1.insertAt(3,42);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #6: Test the insertAt function to place a number outside of the array range.
     cout << "Test #6: Test the insertAt function to place a number outside of the array range." << endl << endl;
     
     cout << "Before Test: array1.insertAt(246, 10)" << endl << endl;;
     cout << "After Test: ";
   
     array1.insertAt(246,10);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #7: Test the insertAt function to insert a number at the front of the array.
     cout << "Test #7: Test the insertAt function to insert a number at the front of the array." << endl << endl;

     cout << "Before Test: array1.insertAt(0, 5)" << endl << endl;;
     cout << "After Test: ";

     array1.insertAt(0,5);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #8: Test the replaceAt function to replace the third number in the array.
     cout << "Test #8: Test the replaceAt function to replace the third number in the array." << endl << endl;
     
     cout << "Before Test: array1.replaceAt(2, 20)" << endl << endl;;
     cout << "After Test: ";

     array1.replaceAt(2,20);
     array1.print();	

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #9: Test the insertEnd function to put the number 63 at the end of the array.
     cout << "Test #9: Test the insertEnd function to put the number 63 at the end of the array." << endl << endl;

     cout << "Before Test: array1.insertEnd(63)" << endl << endl;;
     cout << "After Test: ";

     array1.insertEnd(63);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #10: Test the seqSearch function to find the number 20.
     cout << "Test #10: Test the seqSearch function to find the number 20." << endl << endl;

     cout << "Before Test: array1.seqSearch(20)" << endl << endl;;
     cout << "After Test: ";
	
     b = array1.seqSearch(20);
     cout << "The location of the desired number is " << b << endl;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #11: Test the seqSearch function to find a number that is not in the array.
     cout << "Test #11: Test the seqSearch function to find a number that is not in the array." << endl << endl;

     cout << "Before Test: array1.seqSearch(31)" << endl << endl;;
     cout << "After Test: ";

     c = array1.seqSearch(31);
     cout << "The location of the desired number is " << c << endl;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #12: Test the remove function to remove the number 63 from the array.
     cout << "Test #12: Test the remove function to remove the number 63 from the array." << endl << endl;

     cout << "Before Test: array1.remove(63)" << endl << endl;;
     cout << "After Test: ";
     
     array1.remove(63);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #13: Test the remove function to remove a number that is not in the array.
     cout << "Test #13: Test the remove function to remove a number that is not in the array." << endl << endl;
     
     cout << "Before Test: array1.remove(44)" << endl << endl;;
     cout << "After Test: ";

     array1.remove(44);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #14: Test the removeAt function to remove the last element from the array.
     cout << "Test #14: Test the removeAt function to remove the last element from the array." << endl << endl;

     cout << "Before Test: array1.removeAt(4)" << endl << endl;;
     cout << "After Test: ";
	
     array1.removeAt(4);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #15: Test the removeAt function to remove an element that is out of range.
     cout << "Test #15: Test the removeAt function to remove an element that is out of range." << endl << endl;

     cout << "Before Test: array1.removeAt(300)" << endl << endl;;
     cout << "After Test: ";
     
     array1.removeAt(300);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #16: Test the removeAll function to remove multiple elements of the same number.
     cout << "Test #16: Test the removeAll function to remove multiple elements of the same number." << endl << endl;
     
     cout << "Before Test: I changed the array so that there are multiple elements of the same number." << endl;
     cout << "             array1.replaceAt(0,4)" << endl;
     cout << "             array1.replaceAt(1,4)" << endl;
     cout << "             array1.replaceAt(2,4)" << endl;
     cout << "             array1.removeAll(4)" << endl << endl;
     cout << "After Test: ";
     
     array1.replaceAt(0,4);
     array1.replaceAt(1,4);
     array1.replaceAt(2,4);
     array1.removeAll(4);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #17: Test the removeAll function to remove a number that is not in the array.
     cout << "Test #17: Test the removeAll function to remove a number that is not in the array." << endl << endl;
     
     cout << "Before Test: I changed the array so that I can have values for the test." << endl;
     cout << "             array1.replaceAt(0,1)" << endl;
     cout << "             array1.replaceAt(1,2)" << endl;
     cout << "             array1.insertAt(2,3)" << endl;
     cout << "             array1.insertAt(3,4)" << endl;
     cout << "             array1.removeAll(77)" << endl << endl;
     cout << "After Test: ";

     array1.replaceAt(0,1);
     array1.replaceAt(1,2);
     array1.insertAt(2,3);
     array1.insertAt(3,4);
     array1.removeAll(77);
     array1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl << endl;

//Goodbye Message:	
     cout << "Wow, that was so much fun! Thanks for joining me in testing unordered arrays!" << endl << endl;	
     return 0;
}

