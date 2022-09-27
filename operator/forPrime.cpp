#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isPrime = true;
    for(int i=2;i<n;i++){

        if(n%2 == 0) {
            isPrime = false;
            break;
        }
    }


    if(isPrime) {
        cout<<"it's a prime number";
    }else {
        cout<<"it's not a prime number";
    }


}