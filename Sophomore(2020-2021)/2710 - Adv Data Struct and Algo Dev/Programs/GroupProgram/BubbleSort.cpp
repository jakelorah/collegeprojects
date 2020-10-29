//Justin Riccardelli
//CSC2710

#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int BubbleSort(int list[10000])
{
    int i,j;
    int counter = 0;
    for(i=0; i<10000; i++)
    {
        for(j=0; j<9999-i; j++)
        {
            if(list[j] > list[j+1])
            {
                swap(list[j], list[j+1]);
                counter += 1;
            }
        }
    }
    cout << "Number of compares: " << counter << endl;
    return list[10000];
}

int main()
{
    ifstream inFile;
    inFile.open("randomlist.txt");

    int list[10000];
    int i;
    clock_t cl;
    int counter;

    for(i=0; i<10000; i++)
    {
        inFile >> list[i];
    }
    cl = clock();
    BubbleSort(list);
    cl = clock() - cl;

    int t1 = (cl/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort random list: " << t1 << " microseconds" << endl;
    cout << "Number of compares: " << counter << endl;
    inFile.close();

    inFile.open("almostsorted.txt");

    int list2[10000];
    clock_t c2;


    for(i=0; i<10000; i++)
    {
        inFile >> list2[i];
    }

    c2 = clock();
    BubbleSort(list2);
    c2 = clock() - c2;

    int t2 = (c2/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort almost sorted list: " << t2 << " microseconds" << endl;
    inFile.close();

    inFile.open("duplicatedset.txt");

    int list3[10000];
    clock_t c3;


    for(i=0; i<10000; i++)
    {
        inFile >> list3[i];
    }

    c3 = clock();
    BubbleSort(list3);
    c3 = clock() - c3;

    int t3 = (c3/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort duplicated list: " << t3 << " microseconds" << endl;
    inFile.close();

    inFile.open("reversedlist.txt");

    int list4[10000];
    clock_t c4;


    for(i=0; i<10000; i++)
    {
        inFile >> list4[i];
    }

    c4 = clock();
    BubbleSort(list4);
    c4 = clock() - c4;

    int t4 = (c4/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort reversed list: " << t4 << " microseconds" << endl;
    inFile.close();
}
