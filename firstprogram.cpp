#include<iostream>
#include<cstring>
using namespace std;
int main ()
{ //system(Cls);
    //cout<<"Tapendra and Naval";
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
    /*for( i=0;i<5;i++)
{  gets(arr[i]);}
for(int i=0;i<5;i++)
{ cout<<arr[i] <<endl; 
}
cout<<arr[2]<<endl;*/
    

    return 0;
}
