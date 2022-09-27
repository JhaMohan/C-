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

    int i=0,j=0,l=n-1;

    while(j<=l) {

       if(arr[j]==0){
        swap(arr[j],arr[i]);
        i++;
        j++;
       } else if(arr[j]==3){
        swap(arr[j],arr[l]);
        l--;
       }else{
        j++;
       }
    }
    i=0;j=n-1; 

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==3) {
            j--;
        }
        if(arr[i]!=0 && arr[j] !=3) {
            break;
        }
    }

    while(i<j) {

        if(arr[i]==1) {
            i++;
        }else if(arr[j]==2) {
            j--;
        } else {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }

    return ;
}



int main() {

    int arr[10] ={2,3,2,1,0,2,0,2,1,3};

    printArray(arr,10);
    sortArray(arr,10);
    printArray(arr,10);

    return 0;
}