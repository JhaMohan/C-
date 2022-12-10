#include<iostream>
using namespace std;



class student {

    private:
     string name;
     int age;
     int height;

    public:
    int getAge() {
         return this->age;
    }
};



int main() {

    student st;
    cout<<"Every thing work fine:"<<endl;
    return 0;
}