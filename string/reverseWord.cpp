#include<iostream>
using namespace std;

void reverseString(string &s,int st,int e) {
        while(st<e) {
           swap(s[st++],s[e--]);       
        }
        return ;
}

int main() {
    string s="aditya mohan jha";
    // cout<<"Enter the string:";
    // cin>>s;
    cout<<"String before reverse: "<<s<<endl;
    int st=0;
    int e=0;
    for(int i=0;s[i]!='\0';i++) {
            if(s[i]==' ') {
                reverseString(s,st,e-1);
            st= i+1;
            e++;
            }else {
                e++;
            }
    }
    reverseString(s,st,e-1);
    cout<<"String after reverse: "<<s<<endl;
}