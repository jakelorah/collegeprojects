//Name: Jake Lorah 
//Date: 4/23/20
//Professor: Dr. Titus
//Program: LinkedStackTest.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab13/LorahLab13/LinkedStackTest.cpp
//Description: Linked Stack Test File.

//This program tests various operations of a linked stack.
//Used copy stacks in the function and pushed the stuff that I popped from the other stack to make it work.
 
#include <iostream>
#include "linkedStack.h"
   
using namespace std; 

void testCopy(linkedStackType<int> OStack);
 
int main()
{
    linkedStackType<int> stack;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;

        //Add elements into stack
    stack.push(28);
    stack.push(94);
    stack.push(37);

        //Use the assignment operator to copy the elements
        //of stack into newStack
    newStack = stack;

    cout << "After the assignment operator, newStack: " 
         << endl; 

        //Output the elements of newStack
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << endl;	
        newStack.pop();
    }

        //Use the assignment operator to copy the elements
        //of stack into otherStack
    otherStack = stack;

    cout << "Testing the copy constructor." << endl;

    testCopy(otherStack);

    cout << "After the copy constructor, otherStack: " << endl;

    while (!otherStack.isEmptyStack())
    {
        cout << otherStack.top() << endl;	
        otherStack.pop();
    }
    cout << endl;

    //Testing the reverse function.
    cout << "This is the test for the reverse function:" << endl;

    linkedStackType<int> stack1; //initializing stack1.
    linkedStackType<int> stack2; //initializing stack2.
    
    stack1.push(6); //adding 6 to stack1.
    stack1.push(7); //adding 7 to stack1.
    stack1.push(8); //adding 8 to stack1.
    stack1.push(9); //adding 9 to stack1.
    stack1.push(10); //adding 10 to stack1.

    linkedStackType<int> stack1Copy; //copystack for the function and print without destroying the original.
    stack1Copy = stack1; //assigning the copystack to stack1.
    
    while (!stack1Copy.isEmptyStack()) //print copyStack.
    {
        cout << stack1Copy.top() << " ";
        stack1Copy.pop();
    }
    cout << endl << endl << "Reversed:" << endl;

    stack1Copy = stack1; //copying stack within function.

    stack1Copy.reverseStack(stack2);

    linkedStackType<int> stack2Copy; //second copy stack prints stack2 so it does not get destroyed.
    
    stack2Copy = stack2; //copying stack within function.
    
    while (!stack2Copy.isEmptyStack())  //print copyStack.
    {
        cout << stack2Copy.top() << " ";
        stack2Copy.pop();
    }

    cout << endl;

    //Test to make sure that an empty stack does not run through the function.
    cout << endl << "Testing the reverse function on an empty list. Outcome should be an error message:" << endl;
   
    linkedStackType<int> emptyStack1; //empty stack.
    linkedStackType<int> emptyStack2; //empty stack.
    
    emptyStack1.reverseStack(emptyStack2);

    return 0;
}
  
     //Function to test the copy constructor
void testCopy(linkedStackType<int> OStack) 
{
    cout << "Stack in the function testCopy:" << endl;

    while (!OStack.isEmptyStack())
    {
        cout << OStack.top() << endl;	
        OStack.pop();
    }
}
