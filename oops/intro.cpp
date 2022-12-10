#include<iostream>
using namespace std;


class Hero {

    //properties
    private: 
       int height;
       int age;
    
   
     public: 
    Hero() {
        cout<<"this ->"<<this<<endl;
        cout<<"constructor called: "<<endl;
    } 

    Hero(int height) {
        this->height = height;
    }

    // Getter and Setter function to access private value
  
    int getName() { return height; }
    int getAge() { return age; }
    void setName(int _height) {height = _height; }
    void setAge(int _age) { age = _age; }

};



class Actor {


};


int main() {

    // static creation
    Hero h1(10);
    cout<<"Address of h1: "<<&h1<<endl;

    //dynamic creation
    Hero *h = new Hero(15 );
    cout<<"Address of *h: "<<h<<endl;

    // cout<<"size of Hero: "<<sizeof(h1)<<endl;
    // cout<<"Name of Hero: "<<h1.name<<endl;
    // cout<<"Age of Hero: "<<h1.age<<endl;
    // h1.setName(20);
    h1.setAge(18);
    // To access from static object we use '.' dot operator 
    cout<<"Name of Hero: "<<h1.getName()<<endl;
    cout<<"Age of Hero: "<<h1.getAge()<<endl;  


    // To access from dyanmic operator we will use '->' operator 
    cout<<"Name of Hero: "<<(*h).getName()<<endl;
    cout<<"Age of Hero: "<<(*h).getAge()<<endl;
    // h->setName(22);
    h->setAge(11);
    cout<<"Name of Hero: "<<h->getName()<<endl;
    cout<<"Age of Hero: "<<h->getAge()<<endl;

    
    

    return 0;
}