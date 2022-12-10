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


void insertAtTail(Node* &tail,int data) {
    Node* newNode = new Node(data);

    if(tail==NULL) {
        tail = newNode;
    }else {

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    }
    return;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int data) {

    if(position<=1) {
        insertAtBegining(tail,head,data);
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
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

    return;

}


void deleteAt(Node* &head,Node* &tail,int position ){

    if(position==1) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }else {
        Node* current = head;
        Node* past = NULL;
        int cnt =1;

        while(cnt<position) {
            past = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL) {
            tail = past; 
            past->next= NULL;
            current->prev=NULL;
        }
        past->next = current->next;
        current->next->prev = past;
        current->next = NULL;
        current->prev = NULL;
        delete current;


    }
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
    cout<<getLength(head)<<endl;
    insertAtTail(tail,60);
    insertAtTail(tail,70);
    print(head);
    insertAtPosition(tail,head,2,88);
    print(head);
    deleteAt(head,tail,3);
    print(head);
     deleteAt(head,tail,1);
    print(head);
    return 0;

}




