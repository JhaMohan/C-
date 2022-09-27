#include<iostream>
using namespace std;

void update(int **ptr) {

    
    //ptr = ptr + 1; //Update any thing in main = NO 

    *ptr = *ptr + 1;   //Update any thing in main = YES update p address

   // **ptr = **ptr + 1; //Update any thing in main = YES update i value
}

int main() {

    int i=5;
    int *p = &i;
    int **ptr = &p;

    cout<<endl<<"&i: "<<&i<<endl;
    cout<<endl<<"p: "<<p<<endl;
    cout<<endl<<"*ptr: "<<*ptr<<endl;

    cout<<endl<<"&p: "<<&p<<endl;
    cout<<endl<<"ptr: "<<ptr<<endl;

    cout<<endl<<"i: "<<i<<endl;
    cout<<endl<<"*p: "<<*p<<endl;
    cout<<endl<<"**ptr: "<<**ptr<<endl;

    cout<<endl;

    cout<<"before calling update()"<<endl;

    cout<<"i: "<<i<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"ptr: "<<ptr<<endl;
    update(ptr);
     cout<<"after calling update()"<<endl;

    cout<<"i: "<<i<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"ptr: "<<ptr<<endl;




}