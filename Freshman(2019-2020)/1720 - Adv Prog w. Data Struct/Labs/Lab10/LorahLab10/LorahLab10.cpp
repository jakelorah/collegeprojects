//Name: Jake Lorah
//Date: 4/2/20
//Professor: Dr. Titus
//Program: LorahLab10.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab10/LorahLab10/LorahLab10.cpp
//Description: My Test Program.

//#Include statements:
#include <iostream>
#include <string>
#include "orderedArrayListType.h"
#include "arrayListType.h"

using namespace std;

int main()
{
     orderedArrayListType list1;
     bool out;
     int a, b, c;

//Welcome Message:      
     cout << endl;
     cout << "Are you ready to test an ordered array? I'm ready! Let's do it!" << endl << endl;
     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #1: Check if the array is empty. 
     cout << "Test #1: Check if the initialized array is empty." << endl << endl;

     cout << "Before Test: list1.isEmpty" << endl << endl;
     cout << "After Test: ";

     out = list1.isEmpty();
     if(out == true)
        cout << "The array is empty." << endl;
     else
        cout << "The array is not empty." << endl;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #2: Test the remove function from an empty list. 
     cout << "Test #2: Test the remove function from an empty list." << endl << endl;

     cout << "Before Test: list1.remove(5)" << endl << endl;
     cout << "After Test: ";

     list1.remove(5); //can be any number. Does not matter because you can't delete from empty list.

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #3: Test the listSize function by checking the size of the list.
     cout << "Test #3: Test the listSize function by checking the size of the list." << endl << endl;

     cout << "Before Test: list1.listSize()" << endl << endl;
     cout << "After Test: The size of the list is  ";

     list1.listSize();
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #4: Test the maxListSize function by checking the maximum size of the list.
     cout << "Test #4: Test the maxListSize function by checking the maximum size of the list." << endl << endl;

     cout << "Before Test: list1.maxListSize()" << endl << endl;;
     cout << "After Test: The max size of the list is ";

     list1.maxListSize();
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #5: Test the insertAt function by inserting 6 into the first position. This test also includes using the stream insertion operator and the friend function.
     cout << "Test #5: Test the insertAt function by inserting 6 into the first position." << endl;
     cout << "         This test also includes using the stream insertion operator and the friend function." << endl << endl;

     cout << "Before Test: list1.insertAt(0,6)" << endl << endl;
     cout << "After Test: The new list is ";

     list1.insertAt(0,6);
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #6: Test the insertAt function by inserting 4 more numbers into the list.
     cout << "Test #6: Test the insertAt function by inserting 4 more numbers into the list." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.insertAt(1,12)" << endl;
     cout << "             list1.insertAt(2,14)" << endl;
     cout << "             list1.insertAt(3,24)" << endl;
     cout << "             list1.insertAt(4,45)" << endl << endl;
     cout << "After Test: The new list is ";

     list1.insertAt(1,12);
     list1.insertAt(2,14);
     list1.insertAt(3,24);
     list1.insertAt(4,45);
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #7: Test the insertEnd function to add 52 to the end of the list.
     cout << "Test #7: Test the insertEnd function to add 52 to the end of the list." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.insertEnd(52)" << endl << endl;;
     cout << "After Test: ";

     list1.insertEnd(52);
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #8: Test the seqSearch function to find the number 14.
     cout << "Test #8: Test the seqSearch function to find the number 14." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.seqSearch(14)" << endl << endl;

     a = list1.seqSearch(14);
     cout << "After Test: The location of 14 in the list is at position " << a << endl;;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #9: Test the seqSearch function by searching for a number that is not in the list.
     cout << "Test #9: Test the seqSearch function by searching for a number that is not in the list." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.seqSearch(250)" << endl << endl;;
     cout << "After Test: ";

     list1.seqSearch(250);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #10: Test the remove function by removing 6 from the list.
     cout << "Test #10: Test the remove function by removing 6 from the list." << endl << endl;
     
     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.remove(6)" << endl << endl;;
     cout << "After Test: The new list is ";

     list1.remove(6);
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #11: Test the remove function by removing a number that is not in the list.
     cout << "Test #11: Test the remove function by removing a number that is not in the list." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.remove(500)" << endl << endl;
     cout << "After Test: ";

     list1.remove(500);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #12: Test the replaceAt function by replacing the first number in the list.
     cout << "Test #12: Test the replaceAt function by replacing the first number in the list." << endl << endl;

     cout << "The list before the test: ";
     list1.print();

     cout << endl;

     cout << "Before Test: list1.replaceAt(0,9)" << endl << endl;;
     cout << "After Test: The new list is ";

     list1.replaceAt(0,9);
     list1.print();

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #13: Test the replaceAt function by replacing a number out of range.
     cout << "Test #13: Test the replaceAt function by replacing a number out of range. " << endl << endl;

     cout << "Before Test: list1.replaceAt(275,205)" << endl << endl;;
     cout << "After Test: ";

     list1.replaceAt(275,205);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #14: Test the size of the constructor by making a list of 10 items..
     cout << "Test #14: Test the size of the constructor by making a list of 10 items." << endl << endl;

     cout << "Before Test: orderedArrayListType list2(10)" << endl;

     orderedArrayListType list2(10);
     list2.print();
 

     b = list2.listSize();
     cout << "The size of this list is " << b << endl << endl;
     
     cout << "Test to see if there is enough room for 10 spaces:" << endl << endl;
     c = list2.maxListSize();
     cout << "The maximum size of the list is " << c << endl;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #15: Test the overloaded assignment operator.
     cout << "Test #15: Test the overloaded assignment operator." << endl << endl;

     orderedArrayListType list3;

     cout << "The size of the array before the assignment is " << list3.listSize() << endl << endl;
     
     cout << "Before Test: list3 = list1" << endl << endl;
    
      list3 = list1;

     cout << "The size of the array after the assignment is " << list3.listSize() << endl;

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #16: Test the insertAt function by adding numbers to a full list.
     cout << "Test #16: Test the insertAt function by adding numbers to a full list." << endl << endl;

     orderedArrayListType list4(4);

     cout << "Before Test: list4.insertAt(0,1)" << endl;
     cout << "             list4.insertAt(1,2)" << endl;
     cout << "             list4.insertAt(2,3)" << endl;
     cout << "             list4.insertAt(3,4)" << endl << endl;

     list4.insertAt(0,1);
     list4.insertAt(1,2);
     list4.insertAt(2,3);
     list4.insertAt(3,4);

     cout << "Here is the list: ";
     list4.print();

     cout << endl;

     cout << "After adding another number to the list: ";
     list4.insertAt(4,6);

     cout << "--------------------------------------------------------------------------------------------------" << endl;

//Test #17: Last test! Test the insertEnd function by adding numbers to the end of a full list.
     cout << "Test #17: Last test! Test the insertEnd function by adding numbers to the end of a full list." << endl << endl;

     orderedArrayListType list5(4);

     cout << "Before Test: list5.insertEnd(1)" << endl;
     cout << "             list5.insertEnd(2)" << endl;
     cout << "             list5.insertEnd(3)" << endl;
     cout << "             list5.insertEnd(4)" << endl << endl;

     list5.insertEnd(1);
     list5.insertEnd(2);
     list5.insertEnd(3);
     list5.insertEnd(4);

     cout << "Here is the list: ";
     list5.print();

     cout << endl;

      cout << "After adding another number to the list: ";
      list5.insertEnd(6);

     cout << "--------------------------------------------------------------------------------------------------" << endl << endl;

//Goodbye Message:      
     cout << "Wow, that was so much fun! Thanks for joining me in testing ordered arrays!" << endl << endl;
     return 0;
}


