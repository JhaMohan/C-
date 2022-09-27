#include<iostream>
using namespace std;


//pass by value
void update(int i) {
    i++;
}

//pass by reference
void update2(int &i) {
    i++;
}

int main() {

    int i=5;
 /*
    int &j= i;

    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;
    i++;
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;
    j++;
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;

*/

cout<<"befoe update() i: "<<i<<endl;
update(i);
cout<<"after update() i: "<<i<<endl;


cout<<"befoe update2() i: "<<i<<endl;
update2(i);
cout<<"after update2() i: "<<i<<endl;
}