#include<iostream>
using namespace std;



class Node {

    public:
        int data;
        Node* next;


    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


int main() {

    Node node1(10);

    cout<<node1.data<<endl;
    cout<<node1.next<<endl;

    Node node2(20);
    node1.next = &node2;

    cout<<node1.data<<endl;
    cout<<node1.next<<endl;
    cout<<(*node1.next).data<<endl;
    cout<<node2.data<<endl;
    cout<<node2.next<<endl;


    Node* node3 = new Node(30);
    cout<<node3->data<<endl;
    cout<<node3->next<<endl;


    return 0;
}
