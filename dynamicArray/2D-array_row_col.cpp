#include<iostream>
using namespace std;


int main() {

    int row,col;
    cout<<"Enter row & col of an array: "<<endl;
    cin>>row;
    cin>>col;

    // creating a 2-D array
    int **arr = new int*[row];
    for(int i=0;i<row;i++) {
        arr[i] = new int[col];
    }

    //creation done

    // taking input
    for(int r=0;r<row;r++) {
        for(int c=0;c<col;c++) {
            cin>>arr[r][c];
        }
    }  

    // print array
   for(int r=0;r<row;r++) {
        for(int c=0;c<col;c++) {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    } 

    //releasing memory 

    for(int i=0;i<row;i++) {
        delete [] arr[i];
    }

    delete [] arr;

}