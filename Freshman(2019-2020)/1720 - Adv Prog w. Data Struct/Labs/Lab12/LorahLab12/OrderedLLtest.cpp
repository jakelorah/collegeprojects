//Name: Jake Lorah
//Date: 4/16/20
//Professor: Dr. Titus
//Program: OrderedLLtest.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab12/LorahLab12/OrderedLLtest.cpp
//Description: Ordered Linked List Test File.

//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        
    int num;                                    

    cout << "Creating list with input 77 11 44 99 33 55" << endl ;

        list1.insertLast(77);                      
        list1.insertLast(11);
        list1.insertLast(44);
        list1.insertLast(99);        
        list1.insertLast(33);
        list1.insertLast(55);

    cout << endl;                               

    cout << "list1: ";                  
    list1.print();                             
    cout << endl;                               

    list2 = list1; //test the assignment operator 

    cout << "list2: ";                 
    list2.print();                              
    cout << endl;                              

    cout << "Enter the number to be "
         << "deleted: ";                        
    cin >> num;                               
    cout << endl;                               

    list2.deleteNode(num);                     

    cout << "After deleting "
         << num << endl << "list2: " ;         
    list2.print();                              
    cout<<endl;  

cout << endl << "Output list1 " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;          

    return 0;					
}



