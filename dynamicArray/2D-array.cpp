#include<iostream>
using namespace std;


int main() {

    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    // creating a 2-D array
    int **arr = new int*[n];
    for(int i=0;i<n;i++) {
        arr[i] = new int[n];
    }

    //creation done

    // taking input
    for(int row=0;row<n;row++) {
        for(int col=0;col<n;col++) {
            cin>>arr[row][col];
        }
    }  

    // print array
    for(int row=0;row<n;row++) {
        for(int col=0;col<n;col++) {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    } 


    for(int i=0;i<n;i++) {
        delete [] arr[i];
    }

    delete [] arr;

}