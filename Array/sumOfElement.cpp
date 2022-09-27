#include<iostream>
using namespace std;

int sumOfElement(int arr[],int n){

    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    return sum;

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

    int sum = sumOfElement(arr,size);

    cout<<"Sum of Array: "<<sum<<endl;

   
}