#include<iostream>
using namespace std;

void print(int arr[],int n) {

    for(int i=0;i<n;i++) {
        cout << arr[i] <<" ";
    }
}


void selectionSort(int *arr,int s,int n) {

    //base case 
    if(s>=n-1) return ;

    //1 case
    int minIndes =s;
    for(int i=s+1;i<n;i++) {
        if(arr[i]<arr[minIndes]) {
            minIndes = i;
        }
    }
    swap(arr[s],arr[minIndes]);

    selectionSort(arr,s+1,n);
}



int main() {

    int arr[7] = {9,4,5,2,7,1,3};

    cout<<"Before sort Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    selectionSort(arr,0,7);
     cout<<"Array element:"<<endl;
    print(arr,7);
    cout<<endl;
    return 0;
}