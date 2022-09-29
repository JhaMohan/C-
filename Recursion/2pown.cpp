#include<iostream>
using namespace std;

int func(int n) {
    //base case
    if(n==0) return 1;
    //recursive relation
    return 2*func(n-1);
    return 0;
}


int main() {

    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;

    int ans = func(n);
    cout<<"2^"<<n<<": "<<func(n)<<endl;
    return 0;
}