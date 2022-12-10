#include<iostream>
using namespace std;


// shallow copy access same memory location in different object 

class deep_copy {


    private:
    int health; 

    public:
    char *name;
    char level;

    deep_copy() {
        cout<<"Simple constructor is called:" << endl;
        name = new char[100];
    }


    deep_copy(deep_copy &temp) {
        cout<<"constructor copy called"<<endl;

        char *ch = new char[strlen(temp.name)+1];
        
        strcpy(ch, temp.name);
     
        this->name = ch;
        this->level = temp.level;
        this->health = temp.health;
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

    deep_copy s1;
    s1.setname("Aditya");
    s1.setlevel('D');
    s1.sethealth(10);

    s1.print();

    //use default constructor copy
    deep_copy s2(s1);
    // shallow s2 = s1;  this way also you can create copy constructor
    s2.print();

    s1.name[0] ='M';

    s1.print();
    s2.print(); 
 
}