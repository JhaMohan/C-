#include<iostream>
using namespace std;


class Node {

public:
    int data;
    Node* prev; 
    Node* next; 

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head) {
    Node* temp = head;
    int len=0;
    while(temp!=NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtBegining(Node* &tail,Node* &head,int data) {
    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    }
    return;
}

void reverse(Node* &head) {

    Node* past = NULL;
    Node* curr = head;
    Node*  forward ;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = past;
        curr->prev = forward;
        past = curr;
        curr = forward;
    }
    head = past;
}


void rreverse(Node* &head,Node* curr,Node* past) {

        if(curr==NULL) {
            head = past;
            return;
        }
        Node* ford = curr->next;
        rreverse(head, ford, curr);
        curr->prev = ford;
        curr->next = past;

}






int main() {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtBegining(tail,head,10);
    insertAtBegining(tail,head,20);
    insertAtBegining(tail,head,30);
    insertAtBegining(tail,head,40);
    insertAtBegining(tail,head,50);
    print(head);

    reverse(head);
    print(head);
    Node* past = NULL;
    rreverse(head,head,past);
    print(head);
    return 0;

}




