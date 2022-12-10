#include<iostream>
using namespace std;


class Node {

    public: 
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Stack {

    public:
        int size;
        int count;
        Node* head;

    Stack(int size) {
        this->size = size;
        count = 0;
        head = NULL;
    }


    void push(int data) {
        Node* newNode = new Node(data);

        if(head == NULL && count<size) {
            head = newNode;
            count++;
        }else if(count<size) {
            newNode->next = head;
            head = newNode;
            count++;
        }else {
            cout<<"Stack overflow!"<<endl;
        }
    }

    void pop() {
        if(head == NULL) {
            cout<<"Stack underflow!"<<endl;
        }else {
            Node* temp = head;
            head = head->next;
            delete temp;
            count--;
        }
    }

    int peek() {
        if(head == NULL) {
            cout<<"Stack is empty!"<<endl;
            return -1;
        }else {
            return head->data;
        }
    }

    bool isEmpty() {

        if(head == NULL) {
            return true;
        }else {
            return false;
        }
    }


};



int main() {

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   

    cout<<"Top of stack: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top of stack: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top of stack: "<<st.peek()<<endl;
   st.pop();
   cout<<"Top of stack: "<<st.peek()<<endl;
   st.pop();
   cout<<"Top of stack: "<<st.peek()<<endl;
   st.pop();
   cout<<"Top of stack: "<<st.peek()<<endl;
   st.pop();
   cout<<"Top of stack: "<<st.peek()<<endl;
    if(st.isEmpty()) {
        cout<<"Stack empty: "<<endl;
    }else {
        cout<<"Stack is not empty:"<<endl;
    }
    return 0;
}