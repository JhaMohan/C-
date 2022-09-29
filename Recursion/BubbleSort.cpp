#include<iostream>
using namespace std;

void print(int arr[],int n) {

    for(int i=0;i<n;i++) {
        cout << arr[i] <<" ";
    }
}

void bubbleSort(int *arr,int n) {

    //base case
    if(n==0 || n==1) return ;

    //solve 1 case
    for(int i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    bubbleSort(arr,n-1);
}


int main() {

    int arr[7] = {9,4,5,2,7,1,3};

    cout<<"Before sort Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    bubbleSort(arr,7);
     cout<<"Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    return 0;
}