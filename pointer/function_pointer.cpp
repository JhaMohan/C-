#include<iostream>
using namespace std;

void print(int *ptr) {

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}

void updateAddress(int *ptr) {

    cout<<"inside updateAddress ptr before: "<<ptr<<endl;
    ptr = ptr + 1;
    cout<<"inside updateAddress ptr after: "<<ptr<<endl;
}

void updateValue(int *ptr) {
   *ptr = *ptr + 1;
}


void getSum(int arr[],int n) {
    cout<<"sum of arr[]: "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    cout<<"sum of arr: "<<sum<<endl;
}

void getPartSum(int arr[],int n) {
   
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    cout<<"sum of part arr: "<<sum<<endl;
}

int main() {

    int value =5;
    int *ptr = &value;
    print(ptr);

    cout<<"Before: "<<ptr<<endl;
    updateAddress(ptr);
    cout<<"After: "<<ptr<<endl;

     cout<<"Before Value: "<<*ptr<<endl;
    updateValue(ptr);
    cout<<"After value: "<<*ptr<<endl;

    int arr[6] ={1,2,3,8,7,4};

    getSum(arr,3);
    getPartSum(arr+3,3); //here we function will send *(arr+3)

    return 0;
}