#include<iostream>
using namespace std;


int main() {

    int arr[10]={2,8,13,15};

    cout<<"Address of 0th index: "<<arr<<endl;
    cout<<"Address of 0th index: "<<&arr[0]<<endl;
    cout<<"Address of 2nd index: "<<&arr[2]<<endl;
    cout<<"3rd "<<*arr<<endl;
    cout<<"4th "<<*arr + 1<<endl;
    cout<<"5th "<<*(arr + 1)<<endl;
    cout<<"6th "<<*(arr + 2)<<endl;
    cout<<"7th "<<2[arr]<<endl;

    int temp[10];
    cout<<"Size of temp: "<<sizeof(temp)<<endl;
    cout<<"Size of *temp: "<<sizeof(*temp)<<endl;
    cout<<"Size of &temp: "<<sizeof(&temp)<<endl;

    int *ptr =  &temp[0];
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
    cout<<"Size of *ptr: "<<sizeof(*ptr)<<endl;
    cout<<"Size of &ptr: "<<sizeof(&ptr)<<endl;


    int a[10] = {1,32,34};
    cout<<"a "<<a<<endl;
    cout<<"&a[0] "<<&a[0]<<endl;
    cout<<"&a "<<&a<<endl;

    int *p = &a[0];
    cout<<"p "<<p<<endl;
    cout<<"&p "<<&p<<endl;
    cout<<"*p "<<*p<<endl;

    //ERROR
      //a = a + 1;

    p = p + 1;
    cout<<"*p: "<<*p<<endl;


}