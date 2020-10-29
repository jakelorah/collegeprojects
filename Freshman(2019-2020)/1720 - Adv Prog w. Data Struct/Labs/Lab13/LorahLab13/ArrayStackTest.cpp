//Name: Jake Lorah
//Date: 4/23/20
//Professor: Dr. Titus
//Program: ArrayStackTest.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab13/LorahLab13/ArrayStackTest.cpp
//Description: Array Stack Test File.

//This program tests various operations of a stack.
//Used copy stacks in the function and pushed the stuff that I popped from the other stack to make it work.
 
#include <iostream>
#include "myStack.h"
  
using namespace std;
 
void testCopyConstructor(stackType<int> otherStack);
 
int main()
{
    stackType<int> stack(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100); 

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);
    copyStack = stack;  //copy stack into copyStack

    cout << "The elements of copyStack: ";
    while (!copyStack.isEmptyStack())  //print copyStack
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack;
    testCopyConstructor(stack);  //test the copy constructor

    if (!stack.isEmptyStack())
        cout << "The original stack is not empty." << endl
             << "The top element of the original stack: "
             << copyStack.top() << endl;

    dummyStack = stack;  //copy stack into dummyStack

    cout << "The elements of dummyStack: ";
    while (!dummyStack.isEmptyStack())  //print dummyStack
    {
        cout << dummyStack.top() << " ";
        dummyStack.pop();
    }
    cout << endl;

    //Testing the reverse function.
    cout << endl << "This is the test for the reverse function:" << endl;
    
    stackType<int> stack1(10); //initializing stack1 with 10.
    stackType<int> stack2(10); //initializing stack2 with 10.
    
    stack1.push(6); //adding 6 to stack1.
    stack1.push(7); //adding 7 to stack1.
    stack1.push(8); //adding 8 to stack1.
    stack1.push(9); //adding 9 to stack1.
    stack1.push(10); //adding 10 to stack1.
    
    stackType<int> stack1Copy(10); //copystack for the function and print without destroying the original.
    stack1Copy = stack1; //assigning the copystack to stack1.

    while (!stack1Copy.isEmptyStack()) //print copyStack.
    {
        cout << stack1Copy.top() << " ";
        stack1Copy.pop();
    }
    cout << endl << endl << "Reversed:" << endl;
  
    stack1Copy = stack1; //copying stack within function.

    stack1Copy.reverseStack(stack2);

    stackType<int> stack2Copy(10); //second copy stack prints stack2 so it does not get destroyed.

    stack2Copy = stack2; //copying stack within function.
  
    while (!stack2Copy.isEmptyStack())  //print copyStack.
    {
        cout << stack2Copy.top() << " ";
        stack2Copy.pop();
    }
    
    cout << endl;
    
    //Test to make sure that an empty stack does not run through the function.
    cout << endl << "Testing the reverse function on an empty list. Outcome should be an error message:" << endl;
    
    stackType<int> emptyStack1; //empty stack.
    stackType<int> emptyStack2; //empty stack.

    emptyStack1.reverseStack(emptyStack2);

    return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
    if (!otherStack.isEmptyStack())
        cout << "otherStack is not empty." << endl
             << "The top element of otherStack: "
             << otherStack.top() << endl;
}
