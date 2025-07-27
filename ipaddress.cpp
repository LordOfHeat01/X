#include<iostream>
using namespace std;
int main()
{
    string s1="100.253.241.105";
    char a1[4],a2[4],a3[4],a4[4];
    int i=0,j=0,k=0,t=0,h=0,c=0;
    while(s1[i]!='\0')
    {
        if(s1[i] == '.')
        {++c;
        if(c>3){cout<<"Invalid String "<<endl; return 0;}
        else {
            if(c==0)
        {
            a1[j++]=s1[i];
        }
        else if(c==1)
        {
            a2[k++]=s1[i];
        }
        else if (c==2)
        {
            a3[t++]=s1[i];
        }
        else if (c==3)
        {
            a3[h++]=s1[i];
        }
        }   
        }
        i++;
        }
    a1[j] = '\0';
    a2[k] = '\0';
    a3[t] = '\0';
    a4[h] = '\0';
    // Output the arrays
    cout << "a1: " << a1 << endl;
    cout << "a2: " << a2 << endl;
    cout << "a3: " << a3 << endl;

    return 0;
}