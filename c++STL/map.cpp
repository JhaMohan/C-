#include<iostream>
#include<map>
using namespace std;


int main() {

    map<int,string> m;

    m[1]="Aditya";
    m[2]="Mohan";
    m[13]="Jha";
    // m.insert({10, "Mohan"}); 


    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

      cout<<"5 is present or not: "<<m.count(5)<<endl;
}