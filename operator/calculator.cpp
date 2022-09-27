#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a,b and oprator"<<endl;
    int a,b;
    char op;

    cin>>a;
    cin>>b;
    cin>>op;

    switch(op){

        case '+': cout<<"a + b: "<<a+b<<endl;
                  break;

        case '-': cout<<"a-b: "<<a-b<<endl;
                  break;

        case '*': cout<<"a*b: "<<a*b<<endl;
                  break;
        case '/': cout<<"a/b: "<<a/b<<endl;
                  break;
        case '%': cout<<"a%b: "<<a%b<<endl;
                  break;
    }
}