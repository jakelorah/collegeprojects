//Name: Jake Lorah
//Date: 3/31/20
//Professor: Dr. Titus
//Program: unorderedArrayListType.h
//File Path: /home/students/jlorah/csc1720/Labs/Lab9/LorahLab9/unorderedArrayListType.h
//Description: Unordered Array List Type Header File.

#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType
   
#include "arrayListType.h" 

class unorderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);

    void insertFirst(int insertItem);
    void removeAt(int location);
    void removeAll(int removeItem);

    unorderedArrayListType(int size = 100);
      //Constructor
}; 


#endif
