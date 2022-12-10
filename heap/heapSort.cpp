#include<iostream>
using namespace std;


void maxHeapify(int arr[],int n,int i) {
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <=n && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i ) {
        swap(arr[largest],arr[i]);
        maxHeapify(arr,n,largest);
    }

}


void heapSort(int arr[],int n) {

    int size = n;

    while(size>1) {
        swap(arr[size],arr[1]);
        size--;
        maxHeapify(arr,size,1);
    }

}


int main() {

    int arr[10] = {-1,30,40,20,60,80,90,65,75,35};
    int n=9;

    for(int i=n/2;i>0;i--) {
        maxHeapify(arr,n,i);
    }
    cout<<endl;
    cout<<"Array after heapify: "<<endl;
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<endl;
    cout<<"Array after heapSort: "<<endl;
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}