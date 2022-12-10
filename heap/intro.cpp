#include<iostream>
#include<queue>
using namespace std;


class heap {

public:
    int arr[100];
    int size;

heap() {
    arr[0] =-1;
    size =0;
}    

void insert(int val) {
    size++;
    int index =size;
    arr[index] = val;

    while(index>1) {
        int parent = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }else {
            return;
        }
    }
}

    void print()
    {
        for(int i=1;i<=size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    void deleteFromHeap() {
        if(size==0) {
            cout<<"Nothing to delete"<<endl;
            return;
        }

        //step-1: replace first element with last element
        arr[1] = arr[size];
        //step-2: delete last element
        size--;

       
        //step-3: propogate root to it's correct position
         int index =1;
         while(index<size) {
            int left = 2*index;
            int right = 2*index + 1;

            if(left < size && arr[index]< arr[left]) {
                swap(arr[index],arr[left]);
                index = left;
            }else if(right < size && arr[index] < arr[right]){
                swap(arr[index],arr[right]);
                index = right;
            }else{
                return;
            }
         }
    }
};


void heapify(int arr[],int n,int i) {

    int largest =i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right <=  n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest !=i) {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

}

void heapSort(int arr[],int n) {

    int size =n;

    while(size>1) {
        swap(arr[1],arr[size]);
         size--;
        heapify(arr,size,1);
       
    }
}


int main() {

    heap h;
    h.insert(60);
     h.print();
    h.insert(50);
     h.print();
    h.insert(40);
     h.print();
    h.insert(30);
     h.print();
    h.insert(20);
     h.print();
    h.insert(70);
     h.print();
    h.insert(65);
     h.print();
    
    h.deleteFromHeap();
     h.print();


    int arr[8] = {-1,54,53,55,52,50,49,45};
    int n=7;

    for(int i=n/2;i>0;i--) {
        heapify(arr,n,i);
    }

    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"Priority queue: "<<endl;
    // max heap
    priority_queue<int> pq;

    pq.push(5);
    pq.push(4);
    pq.push(2);
    pq.push(8);

    cout<<"Top element: " <<pq.top()<<endl;
    pq.pop();
    cout<<"Top element: " <<pq.top()<<endl;
    cout<<"size of priority_queue:" <<pq.size()<<endl;

    if(!pq.empty()) {
        cout<<"Not empty:"<<endl;
    }

    priority_queue<int,vector<int>,greater<int> > minheap;

    minheap.push(5);
    minheap.push(4);
    minheap.push(2);
    minheap.push(8);
    minheap.push(1);


    cout<<"Top element: " <<minheap.top()<<endl;
    minheap.pop();
    cout<<"Top element: " <<minheap.top()<<endl;
    cout<<"size of priority_queue:" <<minheap.size()<<endl;

    if(!minheap.empty()) {
        cout<<"Not empty:"<<endl;
    }




    return 0;
}