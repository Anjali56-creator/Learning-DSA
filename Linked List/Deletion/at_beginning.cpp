#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int arr[] = {1,2,3,4,5};
    int size = 5;

    // 🔹 Step 1: Create linked list from array
   for(int i = 0; i < 5; i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node* tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            tail->next = new Node(arr[i]);  // KEY LINE
        }
    }

    // 🔹 Step 2: Delete first node
    if(head != NULL){
        Node* del = head;
        head = head->next;
        delete del;
    }

    // 🔹 Step 3: Print the linked list
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}