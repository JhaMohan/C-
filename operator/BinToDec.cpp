#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int x = pow(2,31);
    cout<<x;
    int ans=0;
    int i = 0;
    while(n!=0) {

        int bit = n%10;

        ans = (bit* pow(2,i)) + ans;
        i = i +1;
        n = n/10;
    }
    cout<<"number:"<<ans;
}