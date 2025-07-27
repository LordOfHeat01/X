#include<iostream>
#include <algorithm>
using namespace std;
int* count(int arr [],int s,int m){
    int* b=new int [s], i;
   //int m= *max_element(arr, arr + s);//this returns pointer to the max 
    int* c=new int [m+1]();
for (i=0;i<s;i++){
    c[arr[i]]++;
}
for (i=1;i<=m;i++){
    c[i]+=c[i-1];
}
for (i=0;i<s;i++){
    b[--c[arr[i]]]=arr[i];
}
//cout<<"done in count";
delete [] c;
    return b;
}
int main(){
    int s,m=10;// m is predefined range
    cout<<"Enter the size of the array: "; cin>>s;
    int* arr =new int [s];//=new int[s];
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<s;i++){
        cin>>arr[i];
    }
    // cout<<"done";
    int* a=count(arr,s,m);
    //
    cout<<"Sorted Array"<<endl;
    for (int i=0;i<s;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
    delete [] arr;
    delete [] a;
    return 0;
}
