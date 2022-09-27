#include<iostream>
using namespace std;

int getMin(int arr[],int size) {

    int mini = arr[0];

    for(int i=1;i<size;i++){


        mini = min(mini,arr[i]);

        // if(arr[i]<min){
        //     min = arr[i];
        // }
    }
        return mini;
}


int getMax(int arr[],int size) {

    int maxi = arr[0];

    for(int i=1;i<size;i++){

        maxi = max(maxi,arr[i]);
        // if(arr[i]>max){
        //     max = arr[i];
        // }
    }
        return maxi;

}



int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the element: ";

    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    int max = getMax(arr,5);
    int min = getMin(arr,5);

    cout<<endl<<"Max: "<<max<<endl<<"Min: "<<min<<endl;
}