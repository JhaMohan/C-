#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    cout<<"Address of n: "<<&n<<endl;
    int *ptr = &n;
    cout<<ptr<<endl;
     cout<<*ptr<<endl;

     int i=5;

     int *p =0;
     p=&i;
     cout<<p<<endl;
     cout<<*p<<endl;

     //copy a pointer
     int *q = p;
     cout<<*q<<endl;

}