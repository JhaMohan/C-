#include<iostream>
using namespace std;

/*
bool checkPalindrome(string str,int s,int e) {

    if(s>=e) return true;

    if(str[s]!=str[e]) {return false;}
    else  {
        return checkPalindrome(str,s+1,e-1);
    }


    
} */

bool checkPalindrome(string str,int s) {
    int e = ((str.length()-1) -s);
    if(s>e) return true;

    if(str[s]!=str[e]) {return false;}
    else  {
        return checkPalindrome(str,s+1);
    }


    
}

int main() {

    string str = "anffa";
    bool ans = checkPalindrome(str,0);

    if(ans) {
        cout<<"String is palindrome "<<endl;
    }else {
        cout<<"String is not palindrome"<<endl;
    }

    return 0;

}