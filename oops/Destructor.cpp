#include<iostream>
using namespace std;

/* Destructor are used to free-up the space used by object
   Destructor has
      - same name as class
      - no return type
      - no input parameter
   For static object it called automatically but for dynamic object we have to call manually

   we use '~'(tilda) sign to represent destructor

   same like constructor , destructor also called only once for each object
 */    



class Destructor {


    private:
    int health; 

    public:
    char *name;
    char level;

    Destructor() {
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

    ~Destructor() {
        cout<<"Destructor called"<<endl;
    }
};

int main() {

    Destructor d1;

    Destructor *d2 = new Destructor(); 
    delete d2;

    return 0;
}


