#include<iostream>
using namespace std;

void reverseString(string& str,int s,int e) {

    //base case. 
    if(s>e) return ;

    swap(str[s],str[e]);
    s++;
    e--;
    reverseString(str,s,e);

}

int main() {
    string name="Aditya";
    reverseString(name,0,name.length()-1);
    cout<<"string: "<<name<<endl;
    return 0;
    }