#include<iostream>
#include<string>
using namespace std;
class Rotation
{
    string  s1,s2,t1,t2,r1,r2; 
    public:
    void get(string,string);
    void R1();
    void R2();
    void dis();
    int i,k;

};
void Rotation::get(string s,string sh)
{
   s1=s;
   s2=sh;
}
void Rotation::R1()
{k=1;
int n = s1.length();
    t1.resize(k); // Resize t1 to accommodate k characters
    t2.resize(n - k);
    for(i=0;i<k;i++)
    {t1[i] = s1[i];}
    for(i=k;i<n;i++)
    {t2[i-k] = s1[i];}
    r1 = t2 + t1;
}
void Rotation::R2()
{k=2;
int n = s1.length();
    t1.resize(k); // Resize t1 to accommodate k characters
    t2.resize(n - k);
    for(i=0;i<k;i++)
    {t1[i] = s1[i];}
    for(i=k;i<n;i++)
    {t2[i-k] = s1[i];}
    r2 = t2 + t1;
}
void Rotation::dis()
{if(r1 == s2 || r2 == s2)
    {cout<<"True"<<endl;}
    else
    cout<<"False"<<endl;
}
int main ()
{
    Rotation ob;
     string  s,sh; 
      cout<<"Enter Original string-"<<endl;
    getline(cin,s);
    cout<<"Enter Rotated string-"<<endl;
    getline(cin,sh);
    ob.get(s,sh);
    ob.R1();
    ob.R2();
    ob.dis();
    return 0;
}
