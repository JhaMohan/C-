#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    unsigned long long int ans = 0;
    unsigned long long int i = 0;
    while(n!=0) {
        int bit  = n&1;

        ans = (bit * pow(10,i)) + ans;
        i = i + 1;
        n = n>>1;
    }

    cout <<"Binary of number: "<<ans <<endl;
}