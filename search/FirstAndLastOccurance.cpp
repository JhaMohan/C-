#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int k) {

    int start = 0;
    int end = n -1;
    int mid = start + (end - start)/2;
    int ans=-1;

    while(start <= end) {

        if(arr[mid] == k) {
            ans =mid;
            end = mid - 1;
        }else if(arr[mid] > k) {
            end = mid - 1;
        }else  {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}


int lastOcc(int arr[],int n,int k) {

    int start = 0;
    int end = n -1;
    int mid = start + (end - start)/2;
    int ans=-1;

    while(start <= end) {

        if(arr[mid] == k) {
            ans =mid;
            start = mid  + 1;
        }else if(arr[mid] > k) {
            end = mid - 1;
        }else  {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}


int main() {


        int arr[10] = {1,2,3,4,4,4,4,4,4,6};

        cout<<"First occurance of 4 is: "<<firstOcc(arr,10,4)<<endl;
        cout<<"Last occurance of 4 is: "<<lastOcc(arr,10,4)<<endl;


    return 0;


}



