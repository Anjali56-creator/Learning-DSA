#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};
node* createLinkedList(int arr[], int index, int size, node* prev){
    if(index == size){
        return prev;
    }
    node* temp = new node(arr[index]);
    temp->next = prev;

    return createLinkedList(arr, index+1, size, temp);
}

int main() {
    int arr[] = {10,20,30,40};
    int size = 4;
    node* head = createLinkedList(arr, 0, size, NULL);
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}