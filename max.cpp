
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a[10];
//      int c=0,ma=0,max;
//     cout<<"enter elements";
//     for (int  i = 0; i <10 ; i++)
//     {
//         /* code */cin >> a[i];

//     }
//     //tapedra verma owner of verma and verma group of industries
//     for(int i=0; i <10 ; i++)
//     { c=1;
//         for(int j=i+1; j <10 ; j++)
//     {
//         if(a[i] == a[j])
//         {
//             c++;
//         }   
//          }
//          if (ma<c)
//          {
//             ma= c;
//             max=a[i];
//          }
//     }
//     cout << "Max occurring element is: " << max << " with " << ma << " occurrences." << endl;
//     return 0;
// }
#include<iostream>
#include<stdio.h>

using namespace std;

class Base
{
public:
Base()
{
    fun(); //note: fun() is virtual
}
virtual void fun()
{
    cout<<"\nBase Function";
}
};

class Derived: public Base
{
public:
Derived(){}
 void fun()
{
    cout<<"\nDerived Function";
}
};

int main()
{
    Base* pBase = new Derived();
    pBase->fun();
    delete pBase;
    return 0;
}