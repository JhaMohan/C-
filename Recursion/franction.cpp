#include<iostream>
using namespace std;


int fraction(int n) {

    if(n==0) return 1;

    return n*fraction(n-1);
}



int main() {

    int n ;
    cout<<"Enter number:"<<endl;
    cin>>n;

    int ans = fraction(n);

    cout<<"Franction of "<<n<<" is: "<<ans<<endl;

    return 0;
}