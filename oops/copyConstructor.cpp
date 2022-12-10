#include<iostream>
using namespace std;



class CC {

    public:
    int health;
    int age;

    CC(int health,int age) {
        this->health = health;
        this->age = age;
    }

    // compiler by default create a copy constructor but if you implement your own custom one(like below ) then compiler is overtidden
    CC(CC &temp) {
        cout<<"custome copy constructor called:"<<endl;
        this->health = temp.health;
        this->age = temp.age;
    }

    void print() {
        cout<<"health: "<<health<<endl;
        cout<<"age: "<<age<<endl;
    }
};


int main() {

    CC S(70,20);
    S.print();

    // copy constructor
    CC R(S);
    R.print();

}