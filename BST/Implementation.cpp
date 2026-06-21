#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node* insert(Node*root,int target){
    if(root==NULL){
        Node*temp=new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}
void inorder(Node*root){
    if(!root)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int arr[]={1,2,3,4,9,6,7};
    Node *root=NULL;
    for(int i=0;i<7;i++){
        root=insert(root,arr[i]);
    }
    inorder(root);
}