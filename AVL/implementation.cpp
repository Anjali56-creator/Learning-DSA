#include<iostream>
using namespace std;
class Node{
    public:
    int data,height;
    Node *left,*right;
    Node(int value){
        data=value;
        height=1;
        left=NULL;
        right=NULL;
    }
};
int getheight(Node *root){
    if(!root)
    return 0;
    return root->height;
}
int getbalance(Node *root){
    return getheight(root->left)-getheight(root->right);
}
Node* rightrotation(Node *root){
    Node *temp=root->left;
    Node *temp2=temp->right;
    temp->right=root;
    root->left=temp2;
    root->height=1+max(getheight(root->left),getheight(root->right));
    temp->height=1+max(getheight(temp->left),getheight(temp->right));
    return temp;
}
Node* leftrotation(Node *root){
    Node *temp=root->right;
    Node *temp2=temp->left;
    temp->left=root;
    root->right=temp2;
    root->height=1+max(getheight(root->left),getheight(root->right));
    temp->height=1+max(getheight(temp->left),getheight(temp->right));
    return temp;
}

Node* insert(Node *root,int key){
    //does not exists
    if(!root){
        return new Node(key);
    }
    //exists
    if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    return root;
    //update height
    root->height=1+max(getheight(root->left),getheight(root->right));
    //balance
    int balance=getbalance(root);
    //left left case
    if(balance>1 && key<root->left->data){
        return rightrotation(root);
    }
        //right right case
    else if(balance<-1 && root->right->data<key){
        leftrotation(root);
    }
    //left right case
    else if(balance>1 && root->left->data<key){
        leftrotation(root->left);
        rightrotation(root);
    }
    //right left case
    else if(balance<-1 && key<root->right->data){
        rightrotation(root->right);
        leftrotation(root);
    }
    //no unbalance
    else{
        return root;
    }
}
void preorder(Node *root){
    if(!root)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root){
    if(!root)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,40);
    root=insert(root,50);
    root=insert(root,25);
    root=insert(root,35);
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl<<"Inorder traversal: ";
    inorder(root);
    return 0;
}