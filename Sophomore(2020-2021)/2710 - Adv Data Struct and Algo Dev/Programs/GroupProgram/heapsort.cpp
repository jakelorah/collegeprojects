//Jake Lorah
//CSC2710

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <ctime>
#include <chrono>

using namespace std::chrono;

using namespace std;

void heapify(int arr[], int a, int b)
{
    int largest = b;
    int left = 2*b + 1;
    int right = 2*b + 2;

    if (left < a && arr[left] > arr[largest])
        largest = left;

    if (right < a && arr[right] > arr[largest])
        largest = right;

    if (largest != b)
    {
        swap(arr[b], arr[largest]);
        heapify(arr, a, largest);
    }
}

void heapSort(int arr[], int a)
{
    for (int b = a / 2 - 1; b >= 0; b--)
        heapify(arr, a, b);

    for (int b = a - 1; b > 0; b--)
    {
        swap(arr[0], arr[b]);

        heapify(arr, b, 0);
    }
}

void printArray(int arr[], int a)
{
    for (int b = 0; b < a; ++b)
        cout << arr[b] << " ";

    cout << "\n";
}

int main()
{
    clock_t cl;

    ifstream inFile;
    inFile.open("randomlist.txt");

    int b;
    int arr[2000];

    for(b = 0; b < 2000; b++)
    {
        inFile >> arr[b];
    }

    int size;
    size = 2000;

    auto start = high_resolution_clock::now();
    heapSort(arr,2000);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time to sort random list: " << duration.count() << " microseconds" << endl;
    inFile.close();

    inFile.open("almostsorted.txt");

    int arr2[2000];

    for(b = 0; b < 2000; b++)
    {
        inFile >> arr2[b];
    }

    start = high_resolution_clock::now();
    heapSort(arr2,2000);
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);

    cout << "Time to sort almost sorted list: " << duration.count() << " microseconds" << endl;
    inFile.close();

    inFile.open("duplicatedset.txt");

    int arr3[2000];

    for(b = 0; b < 2000; b++)
    {
        inFile >> arr3[b];
    }

    start = high_resolution_clock::now();
    heapSort(arr3,2000);
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);

    cout << "Time to sort duplicated list: " << duration.count() << " microseconds" << endl;
    inFile.close();

    inFile.open("reversedlist.txt");

    int arr4[2000];

    for(b = 0; b < 2000; b++)
    {
        inFile >> arr4[b];
    }

    start = high_resolution_clock::now();
    heapSort(arr4,2000);
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);

    cout << "Time to sort reversed list: " << duration.count() << " microseconds" << endl;
    inFile.close();
}
