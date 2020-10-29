//Name: Jake Lorah
//Date: 3/31/20
//Professor: Dr. Titus
//Program: unorderedArrayListTypeImp.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab9/LorahLab9/unorderedArrayListTypeImp.cpp
//Description: Unordered Array List Type Implementation File.

#include <iostream>
#include "unorderedArrayListType.h" 

using namespace std;

void unorderedArrayListType::removeAll(int removeItem)
{
   int loc;
   int count=0;

   if (length == 0){
       cout << "Cannot delete from an empty list." << endl;
       cout << "            The position of the item to be removed is out of range." << endl;
  }
   else{
       for(int i=0; i<length; i++){
          loc=seqSearch(removeItem);
             if(loc!=-1)
               { removeAt(loc);
                 count++;
               }
             else if(count=0)
                cout << "The item was not found." << endl;
       }
    }
}//end removeAll 
 
void unorderedArrayListType::insertAt(int location, 
                                      int insertItem) 
{
    if (location < 0 || location >= maxSize)
        cout << "The position of the item to be inserted "
             << "is out of range." << endl;
    else if (length >= maxSize)  //list is full
        cout << "Cannot insert in a full list" << endl;
    else
    {
        for (int i = length; i > location; i--)
            list[i] = list[i - 1];	//move the elements down

        list[location] = insertItem; //insert the item at 
                                     //the specified position

        length++;	//increment the length
    }
} //end insertAt

void unorderedArrayListType::insertEnd(int insertItem)
{
    if (length >= maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        list[length] = insertItem; //insert the item at the end
        length++; //increment the length
    }
} //end insertEnd

void unorderedArrayListType::insertFirst(int insertItem)
{
   unorderedArrayListType::insertAt(0, insertItem);
}//end insertFirst

int unorderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < length && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        cout << "Error!" << endl;
} //end seqSearch


void unorderedArrayListType::remove(int removeItem)
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


//Overriding the removeAt function.
void unorderedArrayListType::removeAt(int location)
{
   if(location<0 || location>=length)
      cout << "The location of the item you want to remove is out of range." << endl;
   else{
      list[location]=list[length-1];
      length--;
   }
} //end removeAt


void unorderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt

unorderedArrayListType::unorderedArrayListType(int size)
                       : arrayListType(size)
{
}  //end constructor


