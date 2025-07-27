#include"q-1.h"
using namespace std;
void swap(int arr [],int first, int last,int n){
    int temp=arr[first];
    arr[first]=arr[last];
    arr[last]=temp;
    for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
}cout<<endl;
}
void bubble(int arr [], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr,j,j+1,n);
            }

        }
    }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
int* arr = generateRandomArray(n);
cout<<"Your array"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
} cout<<endl;
bubble(arr,n);
cout<<"Array after bubble sort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
} cout<<endl;
delete[] arr;
return 0;
}
