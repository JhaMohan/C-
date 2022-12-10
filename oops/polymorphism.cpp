#include<iostream>
using namespace std;

class A {

public:
 
void sayHello() {
    cout<<"Hello!"<<endl;
}

//  int sayHello() {            // change in function return type not accepted in function overloading
//     cout<<"Hello!"<<endl;
//     return 0;
//  }

int sayHello(int n) {
    cout<<"Hello!"<<endl;
    return n;
}


char sayHello(char ch) {
    cout<<"Hello!"<<endl;
    return ch;
}


};

int main() {

    A obj;

    obj.sayHello();
    obj.sayHello(5);
    obj.sayHello('c');

    return 0;

}