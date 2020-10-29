#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int count = 0;
using namespace std;
void Load(int arr[])
{
        ifstream inFile;
        inFile.open("Data.txt");

        int i;
        for (i=0; i<100000; i++)
        {
                inFile >> arr[i];
        }
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{   
    if (low < high)
    {   
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(arr, low, high);
        //int count = 0;
        quickSort(arr, low, pi - 1);
        count ++;  // Before pi
        quickSort(arr, pi + 1, high);
        count ++; // After pi
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

int main()
{
    int arr[10000];
    //int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    ifstream inFile;
    inFile.open("randomlist.txt");


    int i;
    clock_t cl;

    for(i=0; i<10000; i++)
    {
        inFile >> arr[i];
    }
    cl = clock();
    quickSort(arr, 0, n-1);
    cout << "The number of comparisons:" << count << endl;
    cl = clock() - cl;
    int t1 = (cl/(double)CLOCKS_PER_SEC)*1000000;
    cout << "Time to sort random list:" << t1 << " microseconds" << endl;
    inFile.close();
    cout << endl;
    inFile.open("almostsorted.txt");

    int arr2[10000];
    clock_t c2;

    for(i=0; i<10000; i++)
    {
        inFile >> arr2[i];
    }

    c2 = clock();
    int m = sizeof(arr2)/sizeof(arr2[0]);
    quickSort(arr2, 0, m-1);
    cout << "The number of comparisons:" << count << endl;
    c2 = clock() - c2;
    int t2 = (c2/(double)CLOCKS_PER_SEC)*1000000;
     cout << "Time to sort almost sorted list:" << t2 << " microseconds" << endl;

    inFile.close();
    cout << endl;


    inFile.open("duplicatedset.txt");

    int arr3[10000];
    clock_t c3;

    for(i=0; i<10000; i++)
    {
        inFile >> arr3[i];
    }

    c3 = clock();
    int o = sizeof(arr3)/sizeof(arr3[0]);
    quickSort(arr3, 0, o-1);
    cout << "The number of comparisons:" << count << endl;
    c3 = clock() - c3;
    int t3 = (c3/(double)CLOCKS_PER_SEC)*1000000;
     cout << "Time to sort duplicated list:" << t3 << " microseconds" << endl;
    cout << endl;
    inFile.close();

    inFile.open("reversedlist.txt");

    int arr4[10000];
    clock_t c4;

    for(i=0; i<10000; i++)
    {
        inFile >> arr4[i];
    }
    c4 = clock();
    int p = sizeof(arr4)/sizeof(arr4[0]);
    quickSort(arr4, 0, p-1);
    cout << "The number of comparisons:" << count << endl;
    c4 = clock() - c4;
    int t4 = (c4/(double)CLOCKS_PER_SEC)*1000000;
     cout << "Time to sort reversed list:" << t4 << " microseconds" << endl;
    inFile.close();

    //endl; 
    return 0;
}
