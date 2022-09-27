#include<iostream>
using namespace std;

char getLower(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }else {
        return ch - 'A' + 'a';
    }
}

void reverseString(char name[],int n) {

    int s=0;
    int e=n-1;
    while(s<e) {
        // char temp = name[s];
        // name[s]=name[e];
        // name[e]=temp;
        // s++;
        // e--;
        swap(name[s++],name[e--]);
    }
}


int getLength(char name[]) {
    int count=0;
   for(int i=0;name[i]!='\0';i++) {  
                count++;
          
   }
    return count;
}


int main() {

    char name[20];
    cout<<"Enter name: ";
    cin>>name;
    int ans = getLength(name);
    cout<<"Length of the string is: "<<ans<<endl;
    reverseString(name,ans);
    cout<<"Reverse string: "<<name<<endl;
}