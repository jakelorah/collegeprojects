//Name: Jake Lorah
//Date: 4/2/20
//Professor: Dr. Titus
//Program: orderedArrayListTypeImp.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab10/LorahLab10/orderedArrayListTypeImp.cpp
//Description: Ordered Array List Type Implementation File.

#include <iostream>
#include "orderedArrayListType.h" 

using namespace std; 


//This function inserts an element into the appropriate position in the array.
void orderedArrayListType::insertAt(int location, 
                                      int insertItem) 
{
    insert(insertItem);
} //end insertAt


//This function inserts an element into the last position in the array.
void orderedArrayListType::insertEnd(int insertItem)
{
    insert(insertItem);
} //end insertEnd


//This function finds the location of the desired element in the array.
int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;


    for(loc = 0; loc < length; loc++)
   
        if (list[loc] == searchItem)
        { 
	    found = true;
	    break;
	}
        else
            loc++;

    if (found)
        return loc;
    else
	cout << "The number you are trying to search for is not in the array." << endl;
        return -1;
} //end seqSearch


//This function removes an element from the array. 
void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove


//This function replaces an element in the array at the desired position.
void orderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
	cout << "The location of the item to be replaced is out of range." << endl;
	
    else
	list[location] = repItem;
} //end replaceAt


//This is the first constructor.
orderedArrayListType::orderedArrayListType(int size)
                       : arrayListType(size)
{
}  //end constructor


//This function inserts an element in the desired position.
void orderedArrayListType::insert(int insertItem)
{
     if(length == 0)
          list[length++] = insertItem;
     else if(length == maxSize)
          cout << "Sorry you can't insert into a full list." << endl; //error message.
     else
     {
          int loc;
          bool found = false;

          for (loc = 0; loc < length; loc++)
          {
               if(list[loc] >= insertItem)
               {
                    found = true;
                    break;
                }
          }
          for (int i = length; i > loc; i--)
               list[i] = list[i-1];
               list[loc] = insertItem;
               length++;
	}
} //end insert


//This ostream overrides the << operator so that it can output the list.
ostream& operator<<(ostream& os, const orderedArrayListType& abc)
{
     cout << "Length = " << abc.length << endl; //prints out length.
     for(int i=0; i < abc.length; i++)
     {
          os << abc.list[i] << " ";	
	
     return os;
     }
} //end override <<


//This overrides the = operator so that it can make a matching object that has the same maximum size.
const orderedArrayListType& orderedArrayListType::operator= (const orderedArrayListType& obj)
{
     if(this != &obj)
          delete [] list;
	
     maxSize = obj.maxSize;
     length = obj.length;
     list = new int [maxSize];
	
     for(int i; i < obj.length; i++)
          list[i] = obj.list[i];
	
     return *this; //this pointer.
} //end override =

