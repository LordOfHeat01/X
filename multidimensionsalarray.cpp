#include<iostream>
using namespace std;
int main ()
{
    int r=4,c=5,i,j;
    int** A=new int*[r];
    for (i=0;i<r;i++)
    {
        A[i]=new int [c];
    }
    cout<<"Enter your values baby"<<endl;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cin >> A[i][j];
        }
    }
    cout<<"Displayiing the values"<<endl;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cout <<  A[i][j];
        }
        cout<<"\n";
    }
    return 0;
}