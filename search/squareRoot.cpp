#include<iostream>
using namespace std;


int squroot(int n) {

    int s=0;
    int e=n;
    int ans=0;
    int m = s +(e-s)/2;

    while(s<e) {
        int sq = (m*m);

        if(sq == n) {
            return m;
        }else if(sq<n) {
            ans = m;
            s = m + 1;
        }else {
            e = m - 1;
        }
        m = s +(e-s)/2;
    }
    return ans;
}


double morePrecise(int n,int precision,int tempSol) {

    double ans = tempSol;
    double factor =1;

    for(int i=0;i<precision;i++) {
        factor = factor/10;
        for(double j=ans;j*j<n;j = j + factor) {
            ans = j;
        }
    }
    return ans;
}





int main() {

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int tempSol =  squroot(n);
    cout<<"Squar root of number: "<<morePrecise(n,3,tempSol)<<endl;

    return 0;


}