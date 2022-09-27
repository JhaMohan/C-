#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> a(5,1);

    cout<<"vector element:";
    for(int i:a) {
        cout<<i<<" ";
    }

    cout<<endl;


    vector<int> v;
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(4);
       v.push_back(5);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;

cout<<"Element at position 2: "<<v.at(2)<<endl;
cout<<"first value"<<v.front()<<endl;
cout<<"last value:"<<v.back()<<endl;
}