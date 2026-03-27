#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node* createLinkedList(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node* temp;
    temp=new node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
int main() {
    int arr[] = {10,20,30,40};
    int size = 4;

    node* head = createLinkedList(arr,0,size);

    // printing
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}