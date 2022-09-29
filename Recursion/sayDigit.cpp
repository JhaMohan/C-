#include<iostream>
using namespace std;


void printDigit(int n,string arr[]) {

    if(n==0) return ;

    int digit = n % 10;
    n= n/10;
    printDigit(n,arr);
    cout<<arr[digit]<<" ";
    return ;
}

int main() {
string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;

    printDigit(n,arr);
    cout<<endl;
    return 0;
}