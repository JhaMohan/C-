#include<iostream>
using namespace std;

void fibonacci(int a,int b,int n) {

    if((a+b)>n) {
        return ;
    }
    cout<< a+b<<" ";

    fibonacci(b,a+b,n);
}




int main() {
    int n;
    cin>>n;
    cout<<0 <<" "<<1<<" ";
    fibonacci(0,1,n);
    cout<<endl;
    return 0;
}