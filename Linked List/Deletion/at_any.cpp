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

    int arr[] = {1,2,3,4,5};

    // Create linked list
    for(int i = 0; i < 5; i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node* tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            tail->next = new Node(arr[i]); 
        }
    }

    int x = 3; // delete 3rd node

    // Case 1: delete head
    if(x == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        for(int i = 1; i < x; i++){
            prev = curr;
            curr = curr->next;

            if(curr == NULL) break; // safety
        }

        if(curr != NULL){
            prev->next = curr->next;
            delete curr;
        }
    }

    // Print list
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}