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


void insertAtTail(Node* &tail,int data) {
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}


void insertAtPosition(Node* &tail,Node* &head,int position,int data) {

    if(position<=1) {
        insertAtBegning(head,data);
        return;
    }

    Node* temp = head;
    int cnt =1;

    while(cnt<position-1) {
        temp = temp->next;
        cnt++;
    }
    if( temp == NULL || temp->next == NULL) {
        insertAtTail(tail,data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

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
    Node* tail=node1;
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insertAtTail(tail,40);
    print(head);

    insertAtPosition(tail,head,2,15); 
    print(head);
    insertAtPosition(tail,head,1,9); 
    print(head);
    insertAtPosition(tail,head,0,8); 
    print(head);
     insertAtPosition(tail,head,9,50); 
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    return 0;
}