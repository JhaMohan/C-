#include<iostream>
using namespace std;

void print(int *arr,int s,int e) {
    cout<<"Array element:"<<endl;

    for(int i=s;i<=e;i++) {
        cout<<arr[i]<<" ";
    }
}

int findPivot(int arr[],int s,int e){
    cout<<endl;
    print(arr,s,e);
    int mid = s +(e-s)/2;
     if(s>=e) return mid;
    if(arr[mid]>arr[0]) {
         return findPivot(arr,mid+1,e);
    }else {
          return findPivot(arr,s,mid);
    }

}


int main() {

    int arr[10] = {3,4,5,6,7,8,9,10,1,2};
    int n=10;
    int index = findPivot(arr,0,n-1);

    cout<<"Pivot of the array: "<<index<<endl;
}