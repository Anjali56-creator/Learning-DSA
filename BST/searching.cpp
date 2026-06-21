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
bool search(Node*root,int target){
    if(root==NULL)
    return false;
    if(root->data==target)
    return true;
    if(target<root->data)
    return search(root->left,target);
    else
    return search(root->right,target);
}
int main(){
    int arr[]={1,2,3,4,9,6,7};
    Node *root=NULL;
    for(int i=0;i<7;i++){
        root=insert(root,arr[i]);
    }
    inorder(root);
    cout<<endl;
    if(search(root,9))
    cout<<"Element found!"<<endl;
    else
    cout<<"Element not found!"<<endl;
}