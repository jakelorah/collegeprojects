/*
Name: Jake Lorah
Program: floydsprogram-jakelorah.cpp
Professor: Dr. Williams
Description: This program generates floyd's algorithm for the given data set.
*/

//include statements.
#include <iostream>
#include <fstream>
#include <string>
#define INFINITY 500

using namespace std;

//path function.
void path(int P[][6], int a, int b)
{
    if(P[a][b]!=0)
    {
        path(P,a,P[a][b]-1);
        cout<<"v"<<P[a][b]<<" -> ";
        path(P,P[a][b]-1,b);
    }
}

//check function.
int checkpath(string str)
{
    int number;

    if(str == "v1")
        number = 0;

    else if(str == "v2")
        number = 1;

    else if(str == "v3")
        number = 2;

    else if(str == "v4")
        number = 3;

    else if(str == "v5")
        number = 4;

    else if(str == "v6")
        number = 5;

    return number;
}

//main path function.
void mainPath(int P[][6], int paths[][2], int countpaths)
{
    int i = 0;

    for(i=0;i<countpaths;i++)
    {
        cout<<endl<<"Pathing for v"<<paths[i][0]+1<<" to v"<<paths[i][1]+1<<endl;
       
         if(P[paths[i][0]][paths[i][1]]==0)
             cout<<"No path available"<<endl; //in this case, it will say no path available for v1 to v6.
         
         else
         {
             cout<<"v"<<paths[i][0]+1<<" -> ";
             path(P,paths[i][0],paths[i][1]);
             cout<<"v"<<paths[i][1]+1<<endl;
         }
    }
}

//final print function.
void finalPrint(int W[][6])
{
    int c,d;

    cout<<endl<<"     v1  v2  v3  v4  v5  v6"<<endl; //formatting.
    cout<<"     ----------------------"<<endl;

    for(c=0;c<6;c++)
        for(d=0;d<6;d++)
        {
            if(d==0)
            {
                if(W[c][d]==500)
                {
                    cout<<"v"<<c+1<<" | "<<"Inf ";
                }

                else
                {
                    if(W[c][d]<10)
                        cout<<"v"<<c+1<<" | "<<W[c][d]<<"   ";

                else
                    cout<<"v"<<c+1<<" | "<<W[c][d]<<"  ";
                }
            }

            if(d<=4&&d>0)
            {
                if(W[c][d]==500)
                {
                    cout<<"Inf ";
                }
            
                else
                {
                    if(W[c][d]<10)
                        cout<<W[c][d]<<"   ";
                
                    else
                        cout<<W[c][d]<<"  ";
                }
            }
         
            else if(d==5)
            {
                if(W[c][d]==500)
                {
                    cout<<"Inf "<<endl;
                }

                else
                {
                    cout<<W[c][d]<<endl;
                }
            }
        }
}

//floyds algorithm function.
void floydsalgorithm(int f, int W[][6], int paths[][2], int countpaths)
{
    int i,j,k,D[6][6],P[6][6];
    
    for(i=0;i<f;i++)

        for(j=0;j<f;j++)
            P[i][j]=0;

    for(i=0;i<6;i++)

        for(j=0;j<6;j++)
            D[i][j]=W[i][j];

    for(k=0;k<f;k++)

        for(i=0;i<f;i++)

            for(j=0;j<f;j++)

                if(D[i][k]+D[k][j]<D[i][j])
                {
                    P[i][j]=k+1;
                    D[i][j]=D[i][k]+D[k][j];
                }


    //each of the matrix's.   
    cout<<endl<<endl<<"Graph of W:"<<endl;
    finalPrint(W);

    cout<<endl<<endl<<"Graph of D6:"<<endl;
    finalPrint(D);

    cout<<endl<<endl<<"Graph of P:"<<endl;
    finalPrint(P);

    mainPath(P,paths,countpaths);
}

//main function
int main()
{
    string file="gfw2.dat"; //reads in file that I was given from blackboard.
   
    ifstream inFile;
    inFile.open(file);
   
    int vertices, connections, i, j;
  
    inFile>>vertices>>connections;
   
    int W[6][6];
   
    for(i=0;i<vertices;i++)
        for(j=0;j<vertices;j++)
            if(i!=j)
                W[i][j]=INFINITY;
   
    for(i=0;i<vertices;i++)
        W[i][i]=0;
   
    string One,Two;
    int number, first, second;
   
    for(i=0;i<connections;i++)
    {
        inFile>>One>>Two>>number;
        
        first=checkpath(One);
        second=checkpath(Two);
        
        W[first][second]=number;
    }
 
    int countpaths;
   
    inFile>>countpaths;
   
    int paths[countpaths][2];
   
    for(i=0;i<countpaths;i++)
    {
        inFile>>One>>Two;
        
        first=checkpath(One);
        second=checkpath(Two);
        
        paths[i][0]=first;
        paths[i][1]=second;
    }

    floydsalgorithm(vertices,W,paths,countpaths);

    return 0;
}
