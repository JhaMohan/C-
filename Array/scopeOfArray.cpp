#include<iostream>
using namespace std;

void update(int arr[],int n){

        cout<<endl;
    arr[0] = 120;
    cout<<"Inside update function: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

        cout<<endl;

}


int main() {

    int arr[3] = {1,2,3};

    cout<<"Inside the main: "<<endl;
    int n=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    update(arr,n);

    cout<<endl;

    cout<<"Inside the main: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

        cout<<endl;
}