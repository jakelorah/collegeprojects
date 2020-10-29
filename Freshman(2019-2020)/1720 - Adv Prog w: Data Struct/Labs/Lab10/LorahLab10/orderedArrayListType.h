//Name: Jake Lorah
//Date: 4/2/20
//Professor: Dr. Titus
//Program: orderedArrayListType.h
//File Path: /home/students/jlorah/csc1720/Labs/Lab10/LorahLab10/orderedArrayListType.h
//Description: Ordered Array List Type Header File.

#ifndef H_orderedArrayListType
#define H_orderedArrayListType

#include "arrayListType.h" 
#include <iostream>

class orderedArrayListType: public arrayListType
{
public:
    friend std::ostream& operator << (std::ostream&, const orderedArrayListType&);
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);
    void insert(int insertItem);
    const orderedArrayListType& operator = (const orderedArrayListType& obj);

    orderedArrayListType(int size = 100);
      //Constructor
}; 


#endif
