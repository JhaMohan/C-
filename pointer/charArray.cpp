#include<iostream>
using namespace std;


int main() {

    int arr[10] = {1,2,3,4,5,6,7,8};
    char ch[5] = "abcd";

    cout<<"interger array: "<<arr<<endl;
    cout <<"character array: "<<ch<<endl;

    char *c = &ch[0];

    cout<<"print c: "<<c<<endl;
    cout<<"print &c: "<<&c<<endl;
    cout<<"print &ch: "<<&ch<<endl;
    cout<<"print &ch[0]: "<<&ch[0]<<endl;
    cout<<"print ch[0]: "<<ch[0]<<endl;



    char temp = 'z';
    char *p = &temp;

    cout<<"output p: "<<p<<endl;
}