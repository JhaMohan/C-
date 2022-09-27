#include<iostream>
using namespace std;


int main() {

    int rows;
    cout<<"Enter row size:"<<endl;
    cin>>rows;

    int *cols =   new int[rows];
    int **arr = new int*[rows];
 
    for(int i=0; i<rows; i++) {
        cout<<"Enter column size for row:"<<i<<endl;
        cin>>cols[i];
        arr[i] = new int[cols[i]];
    }

    // taking input
    cout<<"Enter element:"<<endl;
    for(int r=0;r<rows;r++) {
        for(int c=0;c<cols[r];c++) {
            cin>>arr[r][c];
        }
    } 
  cout<<endl;

  cout<<"Jagger Array:"<<endl;
      // print array
   for(int r=0;r<rows;r++) {
        for(int c=0;c<cols[r];c++) {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    } 

     //releasing memory 

    for(int i=0;i<rows;i++) {
        delete [] arr[i];
    }

    delete [] arr;
     delete [] cols;
}