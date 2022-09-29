#include<iostream>
using namespace std;

bool LinearSearch(int *arr,int key,int size) {
    if(size==0) return false;
   
    if(arr[0]==key)
        return true;

    return  LinearSearch(arr+1,key,size-1);

}

int main() {
    int arr[5] = {1,2,13,45,53};
    int size =5;
    int key = 1;
    bool ans = LinearSearch(arr,key,size);
    if(ans) {
        cout<<"Element found: "<<endl;
    }else {
        cout<<"Element not found: "<<endl;
    }
   return 0;
}