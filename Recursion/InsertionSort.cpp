#include<iostream>
using namespace std;

void print(int arr[],int n) {

    for(int i=0;i<n;i++) {
        cout << arr[i] <<" ";
    }
}

void insertionSort(int *arr,int s,int n) {

    //base case
    if(s>n-1) return ;

    //solve 1 case
    int temp = arr[s];
    int i=s-1;
    for(;i>=0;i--) {
        if(arr[i]>temp) {
            arr[i+1] = arr[i];
        }else {
            break;
        }
            
    }
    arr[i+1]=temp; 

    insertionSort(arr,s+1,n);
}


int main() {

    int arr[7] = {9,4,5,2,7,1,3};

    cout<<"Before sort Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    insertionSort(arr,1,7);
     cout<<"Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    return 0;
}