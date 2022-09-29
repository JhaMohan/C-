#include<iostream>
using namespace std;

void print(int *arr,int s,int e) {
    cout<<"Array element:"<<endl;

    for(int i=s;i<=e;i++) {
        cout<<arr[i]<<" ";
    }
}

bool binarySearch(int *arr,int s,int e,int k) {

    cout<<endl;
    print(arr,s,e);

    if(s>e) return false;

    int mid = s + (e-s)/2;

    if(arr[mid]==k) return true;

    if(arr[mid]>k) {
       return binarySearch(arr,s,mid-1,k);
    }else {
       return binarySearch(arr,mid+1,e,k);
    }
}


int main() {
    int arr[10] = {1,2,13,45,53,155,222,333,444,555};
    int size =10;
    int k= 555;
    bool ans = binarySearch(arr,0,size-1,k);
    cout<<endl;
     if(ans) {
        cout<<"Element found: "<<endl;
    }else {
        cout<<"Element not found: "<<endl;
    }

   return 0;
}