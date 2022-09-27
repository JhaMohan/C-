#include<iostream>
using namespace std;


void printArray(int arr[],int size) {

    cout<<endl;

    cout<<"Array element: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return ;

}



int main() {

    /*
    int arr[3] = {1,2,3};

    cout<<arr[2]<<endl;



    int arr1[15] = {2,7};

    cout<<"Array element: "<<endl;
    int n=15;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    int arr2[15] = {0};

    cout<<"Array element: "<<endl;
    n=15;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }


        cout<<endl;

    int arr3[15] = {1};

    cout<<"Array element: "<<endl;
    n=15;
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }



        cout<<endl;
    */
     int arr1[15] = {2,7};
    int arr2[15] = {1};
    int arr3[15] = {1};
    int n= 15;
    printArray(arr1,n);
    printArray(arr2,n);
    printArray(arr3,n);
    
    int arr3Size = sizeof(arr3)/sizeof(int);
    cout<<"size of array: "<<arr3Size<<endl;
  
    }