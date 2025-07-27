#include<iostream>
using namespace std;
void rotate(int a[],int n,int d){ int j;
// for(int i=0;i<d;i++){
//         int temp=a[0];
//         for( j=0;j<n-1;j++){
//             a[j]=a[j+1];
//         } a[j]=temp;
//     }
//     cout<<"Rotated array is "<<endl;
//     for (int i = 0; i < n; i++)
//     { cout<<a[i]<<" ";
//         /* code */
//     }
for(int i=0;i<n;i++){
    int t = (i + d) % n;
    cout<<a[t]<<" ";
}
    
}
int main (){
    int n,d;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    cout<<"Ente d"<<endl;
    cin>>d;
    rotate(a,n,d);
    
    return 0;
}