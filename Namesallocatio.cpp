#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int n=26,i,j;
    char** arr= new char*[5];
    //memory block created for names 
     for(i=0;i<5;i++)
     {
        arr[i]= new char[n];
     }
     //storing names by names 
     cout<<"Enter names of your choice"<<endl;
     for(i=0;i<5;i++)
     {
        gets(arr[i]);
     }
     cout<<"Displaying names"<<endl;
    for(i=0;i<5;i++)
     {
          cout<<arr[i]<<endl; 
     }
    for(i=0;i<5;i++)
     {
          delete[] arr[i];
        
     }
    delete[]arr;

    return 0;
}
