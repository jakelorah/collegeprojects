#include <iostream>
#include <fstream> 
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;
 
void Merge(int array[], int l, int h, int m)
{
   int i, j, k; 
   int temp[h-l+1];
   i = l;
   k = 0;
   j = m+ 1;
   while (i <= m && j <= h)
   {
      if (array[i] < array[j])
      {
         temp[k] = array[i];
         k++;
         i++;
      }      
      else
      {
         temp[k] = array[j];
         k++;
	 j++;
      }
   }
   while (i <= m)
   {
      temp[k] = array[i];
      k++;
      i++;
   }
   while (j <= h)
   {
      temp[k] = array[j];
      k++;
      j++;
   }
   for(i = l; i<=h;i++)
   {
      array[i] = temp[i-l];
   }
}
void MergeSort(int array[], int l, int h)
{
   int m;
   if (l< h)
   {
      m=(l+h)/2;
      MergeSort(array,l,m);
      MergeSort(array, m+1,h);
      Merge(array,l,h, m);
   }
}
int main()
{
   clock_t c1;
   ifstream inFile;



   inFile.open("randomlist.txt");
   int array[10000];
  
   int i;
   for(i=0;i<10000;i++)
   {
      inFile>>array[i];
   }
   int n=10000;

   auto start= high_resolution_clock::now();
   MergeSort(array, 0, n-1);
  // cout<<"Sorted Data: "<<endl;
   //for (int i = 0; i < n; i++)
      //cout<<array[i]<<endl;
   auto stop= high_resolution_clock::now();

   auto duration=duration_cast<microseconds>(stop - start);

   cout<<"Time to sort random list: "<<duration.count()<<" microseconds"<<endl;
   inFile.close();



   inFile.open("almostsorted.txt");
   int array4[10000];
   for(int i=0;i<10000;i++)
      inFile>>array4[i];
   auto start3=high_resolution_clock::now();
   MergeSort(array4,0,n-1);
   //cout<<"Sorted Data: "<<endl;
   //for(int i=0; i<n;i++)
      //cout<<array4[i]<<endl;
   auto stop3=high_resolution_clock::now();
   auto duration3=duration_cast<microseconds>(stop3-start3);
   cout<<"Time to sort almost sorted list: "<<duration3.count()<<" microseconds"<<endl;
   inFile.close();



   inFile.open("duplicatedset.txt");
   int array3[10000];
   for(int i=0;i<10000;i++)
   {
      inFile>>array3[i];
   }
   auto start2=high_resolution_clock::now();
   MergeSort(array3,0,n-1);
   //cout<<"Sorted Data: "<<endl;
   //for(int i=0;i<n;i++)
      //cout<<array3[i]<<endl;
   auto stop2=high_resolution_clock::now();
   auto duration2=duration_cast<microseconds>(stop2-start2);
   cout<<"Time to sort duplicated list: "<<duration2.count()<<" microseconds"<<endl;
   inFile.close();



   inFile.open("reversedlist.txt");
   int array2[10000];
   
   for(int i =0; i<10000;i++)
   {
      inFile>>array2[i];
   }
  
   auto start1=high_resolution_clock::now();
   MergeSort(array2,0,n-1);
   //cout<<"Sorted Data: "<<endl;
   //for( int i=0;i<n;i++)
      //cout<<array2[i]<<endl;
   auto stop1=high_resolution_clock::now();

   auto duration1=duration_cast<microseconds>(stop1-start1);
   cout<<"Time to sort reversed list: "<<duration1.count()<<" microseconds"<<endl;
   inFile.close(); 

   return 0;
}
