#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;

    s.insert(0);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);

    for(int i:s) {
        cout<<i<<endl;
    }
    cout<<"5 is present or not: "<<s.count(5)<<endl;
}