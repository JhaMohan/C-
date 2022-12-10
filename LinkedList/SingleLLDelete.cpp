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

     ~Node() {
        int value = this->data;

        if(this->next!=NULL) {
            cout<<"yaha aa rha hai"<<endl;
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data: "<<value<<endl;
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

void deleteAt(Node* &head,Node* &tail,int position ){

    if(position==1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else {
        Node* current = head;
        Node* prev = NULL;
        int cnt =1;

        while(cnt<position) {
            prev = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL) {
            tail = prev;
        }
        prev->next = current->next;

        current->next = NULL;
        delete current;


    }
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

    deleteAt(head,tail,2);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
     deleteAt(head,tail,1);
    print(head);
    deleteAt(head,tail,6);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    return 0;
}