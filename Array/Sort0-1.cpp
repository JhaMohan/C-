#include<iostream>
using namespace std;


void printArray(int arr[],int n) {
    cout<<"Array Element: ";

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
        }

    cout<<endl;  

    return;  
}



void sortArray(int arr[],int n) {

    int left=0,right = n-1;

    while(left<right) {

        if(arr[left] == 0) {
            left++;
        }else if(arr[right] == 1) {
            right--;
        } else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    return ;
}



int main() {

    int arr[8] ={1,1,0,1,0,1,0,0};

    printArray(arr,8);
    sortArray(arr,8);
    printArray(arr,8);

    return 0;
}