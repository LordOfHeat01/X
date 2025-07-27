/*#include<iostream>
using namespace std;
class test
{

public:
 int n;
    test();
    test(int );
    ~test();
} ;
test::test():n(0){}
test::test(int d):n(d){}
test::~test()
{
//delete []on;
}
int main ()
{
int s;
    cout<<"Enter size of your array"<<endl;
    cin>>s;
      test* ob = new test [s];
    for (int i=0;i<s;i++)
    {
        ob[i] = test(i*i);// here test(i*i) is the parameterized constructor
    }
    for (int i=0;i<s;i++)
    {
        cout<<ob[i].n <<endl;
    }
    delete[] ob;
    return 0;
}*/
#include<iostream>
using namespace std;
class test
{

public:
 int n;
    test();
   // test(int );
    ~test();
} ;
test::test():n(0){}
//test::test(int d):n(d){}
test::~test()
{
//delete []on;
}
int main ()
{
int s;
    cout<<"Enter size of your array"<<endl;
    cin>>s;
      test* ob = new test [s];
    for (int i=0;i<s;i++)
    {
       cout<<"Enter value for each object"<<i+1<<endl;
       cin>>ob[i].n;
    }
    for (int i=0;i<s;i++)
    {
        cout<<"Value of object"<<i+1 <<":"<<ob[i].n <<endl;
    }
    delete[] ob;
    return 0;
}


