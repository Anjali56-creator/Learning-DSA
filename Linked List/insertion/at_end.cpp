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

    // print after full creation
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}