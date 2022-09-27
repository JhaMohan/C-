#include<iostream>
using namespace std;


void swapAlternate(int arr[],int size) {

    for(int i=0;i+1<size;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {


    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element:";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    swapAlternate(arr,size);

    cout<<"Arary element:";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}