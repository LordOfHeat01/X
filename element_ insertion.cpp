#include<iostream>
using namespace std;
int main ()
{
    int s,e,i,j;
    cout<<"Enter size of array"<<endl;
    cin>>s;
    int *a=new int [s];
    for (i=0;i<s;i++){
        cout<<"Enter element"<<endl;
        cin>>a[i]; 
    }
    cout<<"Enter element to insert";
    cin>>e;
    int *t=new int [s+1];
    j=0;
    for (i=0;i<s;i++){
        if (a[i]>e){
            t[j]=e;
            j++;}
            t[j]=a[i];
            j++;
            }
             delete[] a;
    a = t;
    s++;
    cout << "Array after insertion is " << endl;
    for (i = 0; i < s; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    delete[] t;

    return 0;
}