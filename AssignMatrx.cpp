#include<iostream>
using namespace std;
class Matrix
{
    int**a;
    int r,c;
    public: int i,j,k;
    Matrix();
    Matrix(int,int);
    ~Matrix();
    Matrix& operator+(Matrix&);
    Matrix& operator*(Matrix&);
    void display();
    void get();
};
Matrix::Matrix():a(nullptr),r(0),c(0){}// default constructor 
Matrix::Matrix(int ro,int co):r(ro),c(co)
{
 a=new int *[r];
    for(i=0;i<r;i++)
    {a[i] =  new int [c];}
}
void Matrix:: get()
{
    cout<<"Enter elements in your Matix"<<endl;
     for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
}
Matrix& Matrix::operator+(Matrix& ob)
{
   for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
  a[i][j] = a[i][j] + ob.a[i][j];
        }
    }
    return *this;
}
Matrix& Matrix::operator*(Matrix&ob)
{ Matrix t;
t.r=r;
t.c=ob.c;
t.a=new int *[t.r];
   for (i=0;i<t.r;i++)
    {  t.a[i] = new int [t.c];
        for (j=0;j<t.c;j++)
        {    t.a[i][j]=0;
            for(k=0;k<c;k++)
            {
      t.a[i][j] = t.a[i][j] + a[i][k] * ob.a[k][j];
        }}
    }
    return *this;
}
Matrix::~Matrix()
{
   for (i = 0; i < r; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}
int main()
{
    Matrix ob,ob1(2,2),ob2(2,2);
    ob1.get();
    ob2.get();
    ob1 = ob1 + ob2;
    cout<<"Matrix after Addition"<<endl;
    ob1.display();
    ob1 = ob1 *ob2;
    cout<<"Matrix after Multiplication"<<endl;
    ob1.display();
    return 0;
    }
    