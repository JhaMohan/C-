#include<iostream>
#include<vector>
using namespace std;



vector<int> reverse(vector<int> v) {
    int s=0;
    int e = v.size() -1;

    while(s<e) {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}


void print(vector<int> v) {

    cout<<"Element: ";

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
}










int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(14);
    v.push_back(3);
    v.push_back(6);
    print(v);
    vector<int> ans = reverse(v);
    cout<<endl;
    print(ans);
     cout<<endl;
    return 0;
}