#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main(){
    Node *head=NULL;
    //Linked list doesn't exists
    if(head==NULL){
        head=new Node(10);
    }
    else{
        Node *temp=new Node(10);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    Node *trav=head;
    while(trav){
        cout<<trav->data<<"";
        trav=trav->next;
    }
}