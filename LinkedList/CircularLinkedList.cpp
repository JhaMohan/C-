#include<iostream>
#include<map>
using namespace std;


class Node {

    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
    }
};

void insertNode(Node* &tail,int data) {
    Node* newNode = new Node(data);

    if(tail==NULL) {
        newNode->next = newNode;
        tail=newNode;
    }else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return ;
}

void printLoop(Node* tail) {
    Node* temp = tail;
    do{
        tail = tail->next;
        cout<<tail->data<<" "; 
        
    }while(tail!=temp);
    cout<<endl;
}


void print(Node* tail) {
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<" "; 
        temp = temp->next;
        
    }
    cout<<endl;
}



bool detectLoop(Node* head) {

    if(head==NULL) return false;

    map<Node* ,bool> visited;

    Node* temp = head->next;

    while(temp!=NULL) {
        if(visited[temp]==true) {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}


Node* floyedDetectLoop(Node* head) {

    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            return slow;
        }
    }

    return NULL;
}


Node* getStartingNode(Node* head) {

    if(head==NULL) return NULL;

    Node* intersection = floyedDetectLoop(head);

    Node* slow = head;

    while(slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;

}

void removeLoop(Node* head) {

    if(head==NULL) return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop) {
        temp = temp->next;
    }

    temp->next = NULL;
}





int main() {


    Node* tail = NULL;
    Node* head = NULL;

    insertNode(tail,10);
    insertNode(tail,20);
    insertNode(tail,30);
    insertNode(tail,40);
    insertNode(tail,50);
    insertNode(tail,60);
    head = tail->next;
    tail -> next = tail ->next->next;
    // print(head);

    cout<<"head = "<<head->data<<endl;
    bool loop = detectLoop(head);
    if(loop) {
        cout<<"Loop detected"<<endl;
    }else {
        cout<<"No loop in LL"<<endl;
    }

    Node* flyodloop  = getStartingNode(tail->next);
      
    cout<<"Loop detected at: "<<flyodloop->data<<endl;

    removeLoop(head);
    print(head);
    
    return 0;
}