#include<iostream>
#include<string>
using namespace std;
class FLOAT
{
    float a;
    public:
    FLOAT();
    FLOAT(float);
    void dis();
    FLOAT operator+(FLOAT&);
    FLOAT operator-(FLOAT&);
    FLOAT operator*(FLOAT&);
    FLOAT operator/(FLOAT&);
};
    FLOAT::FLOAT():a(0){}
    FLOAT::FLOAT(float f):a(f){}
    FLOAT FLOAT::operator+(FLOAT&ob){ return FLOAT(a + ob.a);}
    FLOAT FLOAT::operator-(FLOAT&ob){ return FLOAT(a - ob.a);}
    FLOAT FLOAT::operator*(FLOAT&ob){ return FLOAT(a * ob.a);}
    FLOAT FLOAT::operator/(FLOAT&ob){ return FLOAT(a / ob.a);}
    void FLOAT::dis(){cout<<a<<endl;}
int main ()
{
    FLOAT ob,ob1(6),ob2(6);
    ob1 = ob1  + ob2; cout<<"Value after Addition is :"; ob1.dis();
    ob1 = ob1  - ob2; cout<<"Value after Subtraction is :";  ob1.dis(); 
    ob1 = ob1  * ob2; cout<<"Value after Multiplication is :";  ob1.dis();
    ob1 = ob1  / ob2; cout<<"Value after Division is :" ; ob1.dis();
    return 0;}