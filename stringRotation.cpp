#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s1,s2,t1,t2,result;
    char ch;
    int i,j,k;
    cout<<"Enter your string for Right rotation"<<endl;
    getline(cin,s1);
    cout<<"Enter the string to search "<<endl;
    getline(cin,s2);
    t1=s1;
    int len = t1.length();
    int flag = 0;
    for(i=0;i<len-1;i++)
    {
        //cout<<"Hello"<<endl;
        if(t1==s2)
        {
            cout<<"TRUE";
            flag=1;
            break;
        }
        else
        {
            ch = t1[len-1];
            //cout<<ch<<" ";
            for(i=len-1;i>=1;i--)
                t1[i]=t1[i-1];
            //cout<<"Bye"<<endl;
            t1[0]=ch;
            //cout<<"Rotated string is:"<<t1<<endl;
        }
    }
    if(flag==0)cout<<"FALSE";
    return 0;
}
/*#include<iostream>
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
    s=s+1;
    a.resize(s);
    for(i=0;i<s;i++)
    {
        if(k>a[i])
        {
            int t=a[i+1];
            a[i+1]=k;
            a[i+2]=t;
        }
    }
    cout<<"array after insertion is "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i];
    }
    delete []a;
    return 0;
}
*/
