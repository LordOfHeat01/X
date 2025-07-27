/*#include<iostream>
using namespace std;
int first(int a [],int l,int h,int x)
{
    if(h>=l){
        int mid=(l+h)/2;
        if ( ( mid == 0 || x>a[mid-1] ) && a[mid] == x )
        { return mid;}
        else if(x>a[mid])
        { first(a,(mid+1),h,x);}
        else { first (a,l,(mid-1),x);}
    }
    return -1;
}
int last(int a[],int n,int l,int h,int x)
{
    if (h>=l)
    {
        int mid=(l+h)/2;
        if( ( mid == n-1 || x<a[mid+1] ) && x ==  a[mid] )
        {return mid;}
        else if (x<a[mid]){
            last(a,n,l,mid-1,x);
        }
        else {last(a,n,mid+1,h,x);}
    }
    return-1;
}
int occurence(int a[],int n,int x)
{
   int  f=first(a,0,n-1,x);
   int  l=last(a,n,f,n-1,x);
    return (l-f)+1;
}
int main ()
{   int a[10]={1,2,3,4,4,4,4,8,9,10};
    int n=sizeof(a)/sizeof(a[0]), x=4;
    int O=occurence(a,n,x);
    cout<<"Occurence of number "<<x <<" is "<<O<<" times"<<endl;
}*/
#include<iostream>
using namespace std;

int first(int a [],int l,int h,int x)
{
    if(h>=l){
        int mid=(l+h)/2;
        if ( ( mid == 0 || x>a[mid-1] ) && a[mid] == x )
        { return mid;}
        else if(x>a[mid])
        { return first(a,(mid+1),h,x);}
        else { return first (a,l,(mid-1),x);}
    }
    return -1; // return -1 if element not found
}

int last(int a[],int n,int l,int h,int x)
{
    if (h>=l)
    {
        int mid=(l+h)/2;
        if( ( mid == n-1 || x<a[mid+1] ) && x ==  a[mid] )
        {return mid;}
        else if (x<a[mid]){
            return last(a,n,l,mid-1,x);
        }
        else {return last(a,n,mid+1,h,x);}
    }
    return -1; // return -1 if element not found
}

int occurence(int a[],int n,int x)
{
   int  f=first(a,0,n-1,x);
   int  l=last(a,n,0,n-1,x); // pass 0 instead of f
    if(f == -1) return 0; // return 0 if element not found
    return (l-f)+1;
}

int main ()
{   int a[10]={1,2,3,4,4,4,4,8,9,10};
    int n=sizeof(a)/sizeof(a[0]), x=4;
    int O=occurence(a,n,x);
    cout<<"Occurence of number "<<x <<" is "<<O<<" times"<<endl;
 }
 #include <iostream>
#include <string>
#include <vector>

// Function to extract a word from a string
std::string extractWord(const std::string& str, const std::vector<std::string>& wordList) {
    std::string extractedWord;
    for (const auto& word : wordList) {
        if (str.find(word) != std::string::npos) {
            extractedWord = word;
            break;
        }
    }
    return extractedWord;
}

int main() {
    // List of words to compare
    std::vector<std::string> wordList = {"apple", "banana", "cherry", "date", "elderberry"};

    // Input string
    std::string str = "I love eating apple and banana";

    // Extract a word from the string
    std::string extractedWord = extractWord(str, wordList);

    // Print the extracted word
    if (!extractedWord.empty()) {
        std::cout << "Extracted word: " << extractedWord << std::endl;
    } else {
        std::cout << "No matching word found." << std::endl;
    }

    return 0;
}