#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int *a;
    int i,k,s;
    cout<<"Enter size of your array"<<endl;
    cin>>s;
    a= new int [s];
    cout<<"Enter elemensts in you array"<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter value of element to insert"<<endl;
    cin>>k;
    int* A = new int[s + 1 ];  
    copy(a, a + s, A); 
      delete[]a;
      int j=0;
      while(j<s && k>A[j])
      {
        j++;
      }  
      for(i=s;i>j;i--)
      {
        A[i] = A[i-1];
      }
      A[j] = k;
      s++;
    
    cout<<"array after insertion is "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<A[i]<<" ";
    }
    delete []A;
    return 0;
}
/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int *a;
    int i, k, s;
    cout << "Enter size of your array" << endl;
    cin >> s;
    a = new int[s];
    cout << "Enter elements in your array" << endl;
    for (i = 0; i < s; i++) {
        cin >> a[i];
    }
    cout << "Enter value of element to insert" << endl;
    cin >> k;

    // Create a new array with one extra space for the new element
    int *A = new int[s + 1];

    // Copy all elements from the original array to the new array
    copy(a, a + s, A);
    delete[] a;

    // Find the correct position to insert the new element
    int j = 0;
    while (j < s && k > A[j]) {
        j++;
    }

    // Shift elements to make space for the new element
    for (int m = s; m > j; m--) {
        A[m] = A[m - 1];
    }

    // Insert the new element
    A[j] = k;

    // Increment the size of the array
    s++;

    cout << "Array after insertion:" << endl;
    for (i = 0; i < s; i++) {
        cout << A[i] << " ";
    }

    delete[] A;
    return 0;
}*/
