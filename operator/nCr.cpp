#include<iostream>
using namespace std;


int factorial(int num) {
    int fact =1;

    for(int i=2;i<=num;i++){
        fact = fact*i;
    }

    return fact;
}

int nCr(int n,int r) {

    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);

    return numerator/denominator;
}



int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;

    cout<<"nCr :"<<nCr(n,r)<<endl;
}


