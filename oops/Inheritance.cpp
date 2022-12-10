#include<iostream>
using namespace std;


class Human {

    public:
        int height;
        int age;
        int weight;
    
    void setWeight(int w) { 
        this->weight = w;
    }

    int getWeight() { return this->weight; }
};


class Male: public Human {

    public:
     string color;

    void sleep() { 
        cout<<"Male is sleeping"<<endl;
    }

};

int main() { 

    Male m;

    m.setWeight(45);
    cout<<m.getWeight()<<endl;
    m.sleep();

    return 0;
}