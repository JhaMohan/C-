#include<iostream>
using namespace std;


// shallow copy access same memory location in different object 

class shallow {


    private:
    int health; 

    public:
    char *name;
    char level;

    shallow() {
        cout<<"Simple constructor is called:" << endl;
        name = new char[100];
    }


    void print() {

        cout<<endl<<endl;
        cout<<"[ name: "<<this->name<<",";
        cout<<" level: "<<this->level<<",";
        cout<<" health: "<<this->health<<" ]";
        cout<<endl<<endl;
    }

    void sethealth(int health) {
        this->health = health;
    }

    void setlevel(char level) {
        this->level = level;
    }

    void setname(char name[]) {
        strcpy(this->name ,name);
    }
};


int main() {

    shallow s1;
    s1.setname("Aditya");
    s1.setlevel('D');
    s1.sethealth(10);

    s1.print();

    //use default constructor copy
    shallow s2(s1);
    // shallow s2 = s1;  this way also you can create copy constructor
    s2.print();

    s1.name[0] ='M';

    s1.print();
    s2.print(); 
}