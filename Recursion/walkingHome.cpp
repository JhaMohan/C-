#include<iostream>
using namespace std;

void walk(int src,int dest){

    cout<<"Source "<<src<<" Destinaton "<<dest<<endl;

    if(src==dest){
        cout<<endl<<"Pahuch gya"<<endl;
        return ;
    }
    src++;
    walk(src,dest);
} 

int main() {
    int src=1,dest=10;
    cout<<endl;
    walk(src,dest);
    cout<<endl;
    return 0;
}