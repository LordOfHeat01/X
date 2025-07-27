#include<iostream>
#include<string>
using namespace std;
/*int  main()
{
    string  s1,s2;
    int i=0,j=0,c=0;
    cout<<"Enter the main string "<<endl;
    getline(cin,s1);
    cout<<"Enter the main string "<<endl;
    getline(cin,s2);
    int l= s2.length();
    while(s1[i]!='\0')
    {
        if (s1[i] == s2[0])
        {
            while (s2[j]!='\0')
            {
                if (s1[i + j] == s2[j])
                { c++;
                j++;}
                else {  j=0; c=0; break;}
            }
        }
    if (c == l)
    {
        cout<<"String is Present in the Main string "<<endl; return 0;
    }i++;
    }
    cout<<"String is not present in the Main string "<<endl;
    return 0;
}*/
int main()
{

    int i,j,l;
    string s;
    cout<<"Enter your string:"<<endl;
    getline(cin,s);
    l=s.length();
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;)
        {

            if(s[i] == s[j])
            {
                  for(int k=j;k<l;k++)
                  {
                      s[k] = s[k+1];
                  } l--;
            } else j++;
        }

    } cout<<"String after removing duplicates"<<endl<<s<<endl;
}

