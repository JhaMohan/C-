#include<iostream>
#include<array>

using namespace std;

int main() {

int arr[3] = {1,2,3};
array<int,4> a={1,2,3,4};

int size = a.size();
cout<<"Array value: ";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"value at position 2: "<<a.at(2)<<endl;
cout<<"first value"<<a.front()<<endl;
cout<<"last value:"<<a.back()<<endl;


}