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
    Node* head=NULL;
    int arr[]={1,2,3,4,5};
    //insert at beginning
    //linked list does not exist
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
        }
        //linked list exists
        else{
        Node* temp;
        temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
        }
    }
//print the linked list
Node *temp=head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
return 0;
}