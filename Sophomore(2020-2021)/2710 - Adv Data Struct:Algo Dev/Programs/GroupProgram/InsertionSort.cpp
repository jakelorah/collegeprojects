//Justin Riccardelli
//CSC2710

#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int InsertionSort(int list[10000])
{
    int i,j,x;
    int counter = 0;
    for(i=0; i<10000; i++)
    {
        x = list[i];
        j = (i-1);
        while(j>0 && list[j]>x)
        {
            list[j+1] = list[j];
            j--;
            counter += 1;
        }
        list[j+1] = x;
    }
    cout << "Number of compares: " << counter << endl;
    return list[10000];
}

int main()
{
    ifstream inFile;
    inFile.open("randomlist.txt");

    clock_t cl;

    int list[10000];
    int i;
    for(i=0; i<10000; i++)
    {
        inFile >> list[i];
    }

    cl = clock();
    InsertionSort(list);
    cl = clock() - cl;

    int t1 = (cl/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort random list: " << t1 << " microseconds" << endl;
    inFile.close();

    inFile.open("almostsorted.txt");

    clock_t c2;
    int list2[10000];
    for(i=0; i<10000; i++)
    {
        inFile >> list2[i];
    }

    c2 = clock();
    InsertionSort(list2);
    c2 = clock() - c2;

    int t2 = (c2/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort almost sorted list: " << t2 << " microseconds" << endl;
    inFile.close();

    inFile.open("duplicatedset.txt");

    clock_t c3;
    int list3[10000];
    for(i=0; i<10000; i++)
    {
        inFile >> list3[i];
    }

    c3 = clock();
    InsertionSort(list3);
    c3 = clock() - c3;

    int t3 = (c3/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort duplicated list: " << t3 << " microseconds" << endl;
    inFile.close();

    inFile.open("reversedlist.txt");

    clock_t c4;
    int list4[10000];
    for(i=0; i<10000; i++)
    {
        inFile >> list4[i];
    }

    c4 = clock();
    InsertionSort(list4);
    c4 = clock() - c4;
    int t4 = (c4/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort reversed list: " << t4 << " microseconds" << endl;
    inFile.close();
}
