#include<iostream>
using namespace std;


/*

static datatype belongs to class

intialization:  datatype class_name::variable_name = vlaue;

*/


class Static {

    public:
    static int value;

};


int Static::value = 5;


int main() {

    cout<<Static::value<<endl;
}