#include<iostream>
using namespace std;

class B {

    public:
        int a;
        int b;


    int operator+ (B& obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"substraction of two value: "<<value2 - value1<<endl; 
        return 0;
    }
};

int main() {

    B obj1,obj2;
    obj1.a = 5;
    obj2.a =11;
    obj1 + obj2;
    return 0;
}