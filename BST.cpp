#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertINTOBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (data > root->data) {
        root->right = insertINTOBST(root->right, data);
    } else {
        root->left = insertINTOBST(root->left, data); // Corrected to insert into the left subtree
    }
    return root;
}

void takeinput(Node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = insertINTOBST(root, data); // Ensure root is updated
        cin >> data;
    }
}

void display(Node* root) {
    if (root == NULL) {
        return;
    }
    display(root->left); // Visit left subtree
    cout << root->data << " "; // Visit node
    display(root->right); // Visit right subtree
}
void search(Node* root, int x){
    if (root== NULL){cout<<"Element is not present"; return ;}
    if (root->data==x){cout<<"Element is present "; return ;}
    if(root->data>x){ return search(root->left,x);}
    else {return search( root->right,x);}
}
void searchiterative(Node* root,int x){
    Node* temp=root;
    while(temp!=NULL){
        if (temp->data == x){cout<<"Element Found"; return ;}
        if (temp->data>x){ temp=temp->left;}
        else{ temp=temp->right;}
    }
    cout<<"Element not found"<<endl;
}
Node* minval(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){temp=temp->left;}
    return temp;
}
Node* Delete(Node* root, int x){
// base case
if (root == NULL) return root;
if(root->data == x){
    if (root->left==NULL && root->right== NULL)
{delete root;
return NULL;}
//left chlid
if (root->left!=NULL && root->right== NULL){
    Node* temp=root->left;
    delete root;
    return temp;
}
//right child
if (root->left==NULL && root->right!= NULL){
    Node* temp=root->right;
    delete root;
    return temp;
}
//two child
if (root->left!=NULL && root->right!=NULL){
    int mini=minval(root->right)->data;
    root->right=Delete(root->right,mini);
    return root;
}

}
else if (root->data>x){
    root->left=Delete(root->left,x);
    return root;
}
else {root->right=Delete(root->right,x);
return root;}
}
 
int main() {
    Node* root = NULL; int d,x;
    cout << "Enter data to create BST (end with -1): ";
    takeinput(root);
    cout<<"Enter element to search ";
    cin>>x;
    searchiterative(root,x);
    cout<<"Minimum value:"<<minval(root)->data<<endl;
     cout << "Elements in the BST : ";
    display(root);
    cout << endl;
    cout<<"Enter element to delete "<<endl;
    cin>>d;
    Delete(root,d);

    //  cout<<"Enter element to delete ";
    // cin>>x;
    cout << "Elements in the BST : ";
    display(root);
    cout << endl;
    return 0;
}