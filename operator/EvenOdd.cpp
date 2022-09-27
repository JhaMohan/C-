#include<iostream>
using namespace std;


bool isEven(int num){

    if(num&1) {
        return 0;
    }

    return 1;
}


int main() {

    int n;
    cout<<"Enter number: ";

    cin>>n;

    if(isEven(n)){
        cout<<"Even number"<<endl;
    }else{
        cout<<"Odd number"<<endl;
    }



}