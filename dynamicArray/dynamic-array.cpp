#include<iostream>
using namespace std;

int getSum(int *arr,int n) {
    int sum=0;

    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
   return sum;

}

int main() {

    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    //variable size array 
    int *arr = new int[n];

    cout<<"Enter the elelment:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int sum = getSum(arr,n);

    cout<<"Sum: "<<sum<<endl;

    delete []arr;

    cout<<arr[1];

    return 0;
}