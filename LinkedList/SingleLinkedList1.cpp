#include<iostream>
using namespace std;



class Node {
    public:
     int data;
     Node* next;

     Node(int data) {
        this->data = data;
        this->next =NULL;
     }
};


void insertAtBegning(Node* &head,int data) {
    Node* newNode = new Node(data);

    newNode->next = head;
    head = newNode;

    return; 
}


void print(Node* &head) {
    Node* temp = head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int main() {

    Node* node1 = new Node(10);
    Node* head=node1;
    print(head);

    insertAtBegning(head,20);
    print(head);

    insertAtBegning(head,30);
    print(head);

    insertAtBegning(head,40);
    print(head);

    return 0;
}