#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr,int n,int k) {

    deque<int> max(k);
    deque<int> min(k);
    int ans=0;


    for(int i=0;i<k;i++) {
        
        while(!max.empty() && arr[max.front()]<=arr[i]) {
            max.pop_back();
        }

        while(!min.empty() && arr[min.front()]>=arr[i]) {
            min.pop_back();
        }

        max.push_back(i);
        min.push_back(i);
    }

    ans += arr[max.front()] + arr[min.front()];


     for(int i=k;i<n;i++) {

        while(!max.empty() && (i -max.front())>=k) {
            max.pop_back();
        }

        while(!min.empty() && (i -max.front())>=k) {
            min.pop_back();
        }


        // add new element from window 
         while(!max.empty() && arr[max.front()]<=arr[i]) {
            max.pop_back();
        }

        while(!min.empty() && arr[min.front()]>=arr[i]) {
            min.pop_back();
        }

        max.push_back(i);
        min.push_back(i);

        
        ans += arr[max.front()] + arr[min.front()];       
    }

    return ans;
 }



 int main() {

    int arr[7] =  {2, 5, -1, 7, -3, -1, -2} ;
    int k=3;
    cout <<solve(arr,7,k)<<endl;

    return 0;
 }
