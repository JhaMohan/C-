#include<iostream>
using namespace std;

void reverse(int arr[],int size) {

    int n = size/2;

    for(int i=0;i<n;i++) {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the element: ";

    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    cout<<"array element: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr,size);
    cout<<endl;
    cout<<"array element after reverse: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}