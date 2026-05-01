#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node* Head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        //if linked list doesn't exists
        if(Head==NULL){
            Head=new Node(arr[i]);
        }
        //if linked list exists
        else{
            Node* temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
    //print the linked list
    Node* temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}