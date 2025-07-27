#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
    this->data=data;
    this->next=NULL;
    }
    friend class list;
};
class list{
Node* head;
Node* tail;
int s;
public:
    list(){
    this->s=0;
    head=NULL;
    tail=NULL;}
    void insertfirst(int val){
    Node * new_node=new Node(val);
    new_node->next=head;
    head=new_node;
    if(tail==NULL){
        tail=head;
    } s++;}
    void insertlast(int val){
        if(tail==NULL){//here the time complexity will be O(1) as we don't need to traverse the list
            insertfirst(val);
            return ;
        }
        Node *new_node=new Node(val);
        tail->next=new_node;// here also we don't need to traverse the whole list
        tail=new_node;
        tail->next=NULL;
        s++;
    }
    void insert(int val,int ind){
    if (ind >s){
        cout<<"Index out of bounds"<<endl;
    }
    if (ind == 0){
            insertfirst(val);
            return;
        }
        if(ind == s){
            insertlast(val);
            return;
        }
        Node* temp=head;
        for (int i=1;i<ind;i++){
            temp=temp->next;
        }
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;
        s++;
        }
        void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"END"<<endl;;
        cout<<s;
        }
    };
int main ()
{

    list n1;
    n1.insertfirst(10);
    n1.insertfirst(20);
    n1.insertfirst(30);
    n1.insertfirst(40);
    n1.insertfirst(50);
    n1.insertlast(500);
    n1.insert(600,2);
    n1.display();
    return 0;
}
