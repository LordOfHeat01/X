#include<iostream> 
using namespace std;
struct node{
    double data;
    node *next;
};
node *add(node *top,double data){
    node *newnode = new node;
    newnode->data=data;
    if (newnode==NULL){
        cout<<"Memory error"<<endl; 
        return NULL;
    }
    newnode->next=top;
    top=newnode;
    return top;
}
node *pop(node *top){
    if (top==NULL){
        cout<<"stack is empty"; return NULL;}
node *temp=top;//new node();
temp=top;
double d=temp->data;
top=temp->next;
return top;
}
void display(node *top){
node *temp=new node();
temp=top; 
while(temp!=0){
    cout<<temp->data<<" ";
    temp=temp->next;
}  cout<<endl;

}
int main(){
    node *top=NULL;
    top=add(top,67.89);
    top=add(top,45.67);
    top=add(top,23.45);
    display(top);
    top=pop(top);
    display(top);
    return 0;
}