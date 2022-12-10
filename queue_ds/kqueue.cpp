#include<iostream>
#include<queue>
using namespace std;


class kQueue {

    public:
        int freeSpace,k,n;
        int *arr;
        int *front;
        int *rear;
        int *next;


    kQueue(int n,int k) {
        this->n = n;
        this->k=k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        next = new int[n];


        for(int i=0;i<k;i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        for(int i=0;i<n;i++) {
            next[i] = i +1;
        }
        next[n-1] = -1;

        freeSpace=0;
    }

    void enqueue(int data,int qn) {

        // check for overflow
        if(freeSpace==-1) {
            cout<<"Queue overflow"<<endl;
            return;
        }

        //get free index
        int index = freeSpace;

        //update freeSpace
        freeSpace = next[index];

        //update front index
        if(front[qn-1]==-1) {
            front[qn-1] = index;
        }else {
            next[rear[qn-1]] = index;
        }

        //update rear index
        rear[qn-1] = index;
        // update next
        next[index] = -1;
        //update arr
        arr[index] = data;

        return;
    }




    int dequeue(int qn) {

        // check for underflow
        if(front[qn-1] == -1) {
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        // get front index
        int index = front[qn-1];

        //update front index
        front[qn-1] = next[index];

        //update next index
        next[index] = freeSpace;

        //update free space
        freeSpace = index;

        return arr[index];
    } 



 



};

   int main() {

        kQueue q(10,3);

        q.enqueue(2,1);
        q.enqueue(5,1);
        q.enqueue(8,2);
        q.enqueue(7,2); 

        cout<<q.dequeue(1)<<endl;
        cout<<q.dequeue(1)<<endl;
        cout<<q.dequeue(2)<<endl;
        cout<<q.dequeue(2)<<endl;

        cout<<q.dequeue(1)<<endl;
        cout<<q.dequeue(2)<<endl;


        return 0;
    }