//Name: Jake Lorah
//Date: 4/9/20
//Professor: Dr. Titus
//Program: LorahLab11.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab11/LorahLab11/LorahLab11.cpp
//Description: Test Program.

//Data: 2.85 6.74 28.93 61.22 10.00 45.34 61.78 5.75

#include <iostream>
 
#include "unorderedArrayListType.h"

using namespace std; 

int main() 
{
    unorderedArrayListType<double> numList(25); 

    double num;                                

    cout << "Please Enter 8 Numbers: "; //asking the user.     

    for (int count = 0; count < 8; count++)     
    {
        cin >> num;                             
        numList.insertEnd(num);                 
    }

    cout << endl;    
 
//Welcome Message:
cout << "The Tests Begins Here!" << endl;
cout << "------------------------------------------------------------------" << endl;
                          
//Test #1: Test the maxListSize function.
    cout << "Test #1: Test the maxListSize function: " << endl << endl;
    cout << "The maximum size of the list is " << numList.maxListSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #2: Test the listSize function.
    cout << "Test #2: Test the listSize function: " << endl << endl;
    cout << "The size of the list is " << numList.listSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #3: Test the isEmpty function with not an empty list. 
    cout << "Test #3: Test the isEmpty function with not an empty list: " << endl << endl;
    if(numList.isEmpty() == true)
	cout << "The list is empty." << endl;
    else 
	cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #4: Test the isEmpty function with an empty list.
    unorderedArrayListType<double> Alist(5);
    cout << "Test #4: Test the isEmpty function with an empty list: " << endl << endl;
    if(Alist.isEmpty() == true)
	cout << "The list is empty." << endl;
    else
	cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #5: Test the isFull function with a full list.
    cout << "Test #5: Test the isFull function with a full list: " << endl << endl;
    cout << "Please Enter 5 Numbers: "; //asking the user.       
    for (int count = 0; count < 5; count++)     
    {
        cin >> num;                             
        Alist.insertEnd(num);                 
    }

    if (Alist.isFull() == true)
	cout << "The list is full." << endl;
    else 
	cout << "The list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl; 

//Test #6: Test the isFull function without a full list.
    cout << "Test #6: Test the isFull function without a full list: " << endl << endl;
    if (numList.isFull() == true)
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #7: Test the isItemAtEqual function with the right numbers.
    cout << "Test #7: Test the isItemAtEqual function with the right numbers: " << endl << endl;
    cout << "Before Test: numList.isItemAtEqual(4,10.00)" << endl << endl;
    if(numList.isItemAtEqual(4,10.00) == true)
	cout << "10.00 exists in the fourth position." << endl;
    else
	cout << "10.00 does not exist in the fourth position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #8: Test the isItemAtEqual function with wrong numbers.
    cout << "Test #8: Test the isItemAtEqual function with wrong numbers: " << endl << endl;
    cout << "Before Test: numList.isItemAtEqual(2,10.00)" << endl << endl;
    if(numList.isItemAtEqual(2,10.00) == true)
        cout << "10.00 exists in the fourth position." << endl;
    else
        cout << "10.00 does not exist in the fourth position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #9: Test the retrieveAt function in the list.
    cout << "Test #9: Test the retrieveAt function in the list: " << endl << endl;
    cout << "Before Test: numList.retrieveAt(1,a)" << endl << endl;
    double a = 0.00;
    numList.retrieveAt(1,a);
    cout << "The second number in the list is: " << a << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;


//Test #10: Test the retrieveAt function with an out of range value.
    cout << "Test #10: Test the retrieveAt function with an out of range value: " << endl << endl;
    cout << "Before Test: numList.retrieveAt(234,b)" << endl << endl;
    double b = 0.00;
    numList.retrieveAt(234,b);
    cout << "The number at position 235 is: " << b << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #11: Test the replaceAt function with the second number.
    cout << "Test #11: Test the replaceAt function with the second number: " << endl << endl;
    cout << "Before Test: numList.replaceAt(1,5.7)" << endl << endl;
    numList.replaceAt(1,5.7);
    numList.print();
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #12: Test the replaceAt function with a number out of range.
    cout << "Test #12: Test the replaceAt function with a number out of range: " << endl << endl;
    cout << "Before Test: numList.replaceAt(120,5)" << endl << endl;
    numList.replaceAt(120,5);
    numList.print();
    cout << endl;

    cout << "numList: ";               
    numList.print();                           
    cout << endl;                               

    cout << "Enter the number to be deleted: ";                        
    cin >> num;                                 
    cout << endl;                               

    numList.remove(num);                        
    cout << "After removing " << num << " numList: ";                       
    numList.print();                            
    cout << endl;                              
 
    cout << "Enter the search item: "; 

    cin >> num;                                 
    cout << endl;                               

    if (numList.seqSearch(num) != -1)           
        cout <<  num << " found in numList." << endl;   
    else                                        
        cout <<  num << " is not in numList." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
  
//Test #13: Test the clearList function.
    cout << "Test #13: Test the clearList function: " << endl << endl;
    cout << "Before Test: numList.clearList()" << endl << endl;
    numList.clearList();
    cout << "The length of the list should be zero after clearing the list." << endl;
    cout << "The length of the list is: " << numList.listSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #14: Test the same functions for an int list.
    cout << "Test #14: Test the same functions for an int list: " << endl << endl;
    cout << "Before Test: unorderedArrayListType<int> intList(25)" << endl << endl;

    unorderedArrayListType<int> intList(25); 

    int numInt;                                

    cout << "Please Enter 8 Numbers: ";        

    for (int count = 0; count < 8; count++)     
    {
        cin >> numInt;                             
        intList.insertEnd(numInt);                 
    }

    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
                               
//Test #15: Test the maxListSize and listSize functions.
    cout << "Test #15: Test the maxListSize and listSize functions: " << endl << endl;
    cout << "Before Test: intList.maxListSize()" << endl << endl;
    cout << "The max size of the list is " << intList.maxListSize() << endl;
    cout << endl << endl;
    cout << "Testing the listSize function: " << endl << endl;
    cout << "Before Test: intList.listSize()" << endl << endl;
    cout << "The size of the list is " << intList.listSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #16: Test the isEmpty function with not an empty list.
    cout << "Test #16: Test the isEmpty function with not an empty list: " << endl << endl;
    cout << "Before Test: intList.isEmpty()" << endl << endl;
    if(intList.isEmpty() == true)
        cout << "The list is empty." << endl;
    else
        cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #17: Test the isEmpty function with an empty list.
    unorderedArrayListType<int> Blist(5);
    cout << "Test #17: Test the isEmpty function with an empty list:" << endl << endl;
    cout << "Before Test: Blist.isEmpty()" << endl << endl;
    if(Blist.isEmpty() == true)
        cout << "The list is empty." << endl;
    else
        cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #18: Test the isFull function with a full list.
    cout << "Test #18: Test the isFull function with a full list: " << endl << endl;
    cout << "Before Test: Blist.isFull()" << endl << endl;

    cout << "Please Enter 5 Numbers: ";

    for (int count = 0; count < 5; count++)
    {
        cin >> num;
        Blist.insertEnd(num);
    }

    if (Blist.isFull() == true)
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #19: Test the isFull function without a full list.
    cout << "Test #19: Test the isFull function without a full list: " << endl << endl;
    cout << "Before Test: intList.isFull()" << endl << endl;
    if (intList.isFull() == true)
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #20: Test the isItemAtEqual function with correct numbers. 
    cout << "Test #20: Test the isItemAtEqual function with correct numbers: " << endl << endl;
    cout << "Before Test: intList.isItemAtEqual(2,63)" << endl << endl;
    if(intList.isItemAtEqual(2,63) == true)
        cout << "63 exists in the third position." << endl;
    else
        cout << "63 does not exist in the third position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #21: Test the isItemAtEqual function with correct numbers.
    cout << "Test #21: Test the isItemAtEqual function with correct numbers: " << endl << endl;
    cout << "Before Test: intList.isItemAtEqual(7,63)" << endl << endl;
    if(intList.isItemAtEqual(7,63) == true)
        cout << "63 exists in the third position." << endl;
    else
        cout << "63 does not exist in the third position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #22: Test the retriveAt function.
    cout << "Test #22: Test the retrieveAt function: " << endl << endl;
    cout << "Before Test: intList.retrieveAt(1,c)" << endl << endl;
    int c = 0;
    intList.retrieveAt(1,c);
    cout << "The second number in the list is: " << c << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #23: Test the retriveAt function with a value out of range.
    cout << "Test #23: Test the retriveAt function with a value out of range: " << endl << endl;
    cout << "Before Test: intList.retrieveAt(234,d)" << endl << endl;
    int d = 0;
    intList.retrieveAt(234,d);
    cout << "The number at position 235 is: " << d << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #24: Test the replaceAt function with the second number.
    cout << "Test #24: Test the replaceAt function with the second number: " << endl << endl;
    cout << "Before Test: intList.replaceAt(1,24)" << endl << endl;
    intList.replaceAt(1,24);
    intList.print();
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #25: Test the replaceAt function with a number out of range.
    cout << "Test #25: Test the replaceAt function with a number out of range: " << endl << endl;
    cout << "Before Test: intList.replaceAt(120,5)" << endl << endl;
    
    intList.replaceAt(120,5);
    intList.print();
    cout << endl;

    cout << "numList: ";
    intList.print();
    cout << endl;

    cout << "Enter the number to be deleted: ";
    cin >> num;
    cout << endl;


    intList.remove(num);
    cout << "After removing " << num << " numList: ";
    intList.print();
    cout << endl;

    cout << "Enter the search item: ";

    cin >> num;
    cout << endl;

    if (intList.seqSearch(num) != -1)
        cout <<  num << " found in numList." << endl;
    else
        cout <<  num << " is not in numList." << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #26: Test the clearList function to clear the list.
    cout << "Test #26: Test the clearList function to clear the list: " << endl << endl;
    cout << "Before Test: intList.clearList()" << endl << endl;
    intList.clearList();
    cout << "The length of the list should be zero after clearing the list." << endl;
    cout << "The length of the list is: " << intList.listSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #27: Test for string list.
// values tested: Computer,Science,department,is,superior
    cout << "Test #27: Test for string list: " << endl << endl;
    cout << "Before Test: unorderedArrayListType<string> stringList(25)" << endl << endl;

    unorderedArrayListType<string> stringList(25); 

    string numString;                                

    cout << "Enter 8 strings: "; //user input.

    for (int count = 0; count < 8; count++)     
    {
        cin >> numString;                             
        stringList.insertEnd(numString);                 
    }

    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
                               
//Test #28: Test the maxSize function and listSize function.
    cout << "Test #28: Test the maxSize function and listSize function: " << endl << endl;
    cout << "Before Test: stringList.maxListSize()" << endl << endl;
    cout << "The max size of the list is " << stringList.maxListSize() << endl;
    cout << endl << endl;;
    cout << "Testing the listSize function: " << endl;
    cout << "The size of the list is " << stringList.listSize() << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #29: Test the isEmpty function with not an empty list.
    cout << "Test #29: Test the isEmpty function with not an empty list: " << endl << endl;
    cout << "Before Test: stringList.isEmpty()" << endl << endl;
    if(stringList.isEmpty() == true)
        cout << "The list is empty." << endl;
    else
        cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #30: Test the isEmpty function with  an empty list.
    unorderedArrayListType<string> Clist(5);
    cout << "Test #30: Test the isEmpty function with  an empty list: " << endl << endl;
    cout << "Before Test:  unorderedArrayListType<string> Clist(5)" << endl;
    cout << "              Clist.isEmpty()" << endl << endl;
    if(Clist.isEmpty() == true)
        cout << "The list is empty." << endl;
    else
        cout << "The list is not empty." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #31: Test the isFull function with a full list.
    cout << "Test #31: Test the isFull function with a full list: " << endl << endl;
    cout << "Before Test: Clist.isFull()" << endl << endl;
    cout << "Enter 5 strings: ";
    string numm;
    for (int count = 0; count < 5; count++)
    {
        cin >> numm;
        Clist.insertEnd(numm);
    }

    if (Clist.isFull() == true)
        cout << "The list is full." << endl;
    else
        cout << "THe list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #32: Test the isFull function without a full list.
    cout << "Test #32: Test the isFull function without a full list: " << endl << endl;
    cout << "Before Test: stringList.isFull()" << endl << endl;
    if (stringList.isFull() == true)
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #33: Test the isItemAtEqual with right strings.
    cout << "Test #33: Test the isItemAtEqual with right strings: " << endl << endl;
    cout << "Before Test: stringList.isItemAtEqual(0,Computer)" << endl << endl;
    if(stringList.isItemAtEqual(0,"Computer") == true)
	cout << "Computer exists in the first position." << endl;
    else
	cout << "Computer does not exist in the first position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #34: Test the isItemAtEqual function with wrong strings.
    cout << "Test #34: Test the isItemAtEqual function with wrong strings: " << endl << endl;
    cout << "Before Test: stringList.isItemAtEqual(4,Computer)" << endl << endl;
    if(stringList.isItemAtEqual(4,"Computer") == true)
        cout << "Computer exists in the fith position." << endl;
    else
        cout << "Computer does not exist in the fith position." << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #35: Test the retrieveAt function.
    cout << "Test #35: Test the retrieveAt function: " << endl << endl;
    cout << "Before Test: stringList.retrieveAt(1,pos)" << endl << endl;
    string pos = "";
    stringList.retrieveAt(1,pos);
    cout << "The second number in the list is: " << pos << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #36: Test the retriveAt function with out of range value.
    cout << "Test #36: Test the retriveAt function with out of range value: " << endl << endl;
    cout << "Before Test: stringList.retrieveAt(123,Apos)" << endl << endl;
    string Apos = "";
    stringList.retrieveAt(123,Apos);
    cout << "The second number in the list is: " << Apos << endl;
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;

//Test #37: Test the replaceAt function to replace the string at the fifth position.
    cout << "Test #37: Test the replaceAt function to replace the string at the fifth position: " << endl << endl;
    cout << "Before Test: stringList.replaceAt(4,inferior)" << endl << endl;
    stringList.replaceAt(4,"inferior");
    stringList.print();
    cout << endl;

    cout << "stringList: ";               
    stringList.print();                           
    cout << endl;                               

    cout << "Enter the string to be deleted: ";                        
    cin >> numString;                                 
    cout << endl;                               


    stringList.remove(numString);                        
    cout << "After removing " << numString << "stringList: ";                       
    stringList.print();                            
    cout << endl;                              
 
    cout << "Enter the search item: "; 

    cin >> numString;                                 
    cout << endl;                               
                                   
    if (stringList.seqSearch(numString) != -1)           
        cout <<  numString << " found in stringList." << endl;   
    else                                        
        cout <<  numString << " is not in stringList." << endl;  
    cout << "------------------------------------------------------------------" << endl;

//Test #38: Test the clearList function.
    cout << "Test #38: Test the clearList function: " << endl << endl;
    cout << "Before Test: stringList.clearList()" << endl << endl;
    stringList.clearList();
    cout << "The length of the list should be 0." << endl;
    stringList.listSize();
    cout << "------------------------------------------------------------------" << endl;
 
   return 0;                                   
}

