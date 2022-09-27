#include<iostream>
using namespace std;


int findPivot(int arr[],int n){

    int s=0;
    int e= n-1;
    int mid = s +(e-s)/2;

    while(s<e) {

        if(arr[mid]>arr[0]) {
            s = mid + 1;
        }else {
            e = mid;
        }
        mid = s +(e-s)/2;

    }

    return mid;
}


int main() {

    int arr[10] = {3,4,5,6,7,8,9,10,11,2};

    int index = findPivot(arr,10);

    cout<<"Pivot of the array: "<<index<<endl;
}