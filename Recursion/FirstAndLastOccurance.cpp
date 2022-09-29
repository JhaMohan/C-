#include<iostream>
using namespace std;


void print(int *arr,int s,int e) {
    cout<<"Array element:"<<endl;

    for(int i=s;i<=e;i++) {
        cout<<arr[i]<<" ";
    }
}


int firstOcc(int arr[],int start,int end,int k) {

    // cout<<endl;
    // print(arr,start,end);

    
    int mid = start + (end - start)/2;
   
    int ans =-1;
    if(start>end) return ans;

        if(arr[mid] == k) {
             ans = mid;
           int ans1 = firstOcc(arr,start,mid-1,k);
           if(ans1!=-1) {
             ans =ans1;
           }
          return ans;
        }else if(arr[mid] > k) {
           return firstOcc(arr,start,mid-1,k); 
        }else  {
            start = mid + 1;
            return firstOcc(arr,start,end,k); 
        }
    
}


int lastOcc(int arr[],int start,int end,int k) {

 
    int mid = start + (end - start)/2;
    int ans=-1;
    if(start>end) return ans;
   

        if(arr[mid] == k) {
            ans =mid;
             start = mid  + 1;
           int ans1 = lastOcc(arr,start,end,k);
           if(ans1!=-1) {
             ans =ans1;
           }
          return ans;
            
        }else if(arr[mid] > k) {
            end = mid - 1;
            return lastOcc(arr,start,end,k);
        }else  {
            start = mid + 1;
            return lastOcc(arr,start,end,k);
        }
}


int main() {


        int arr[10] = {1,2,3,4,5,6,7,8,8,9};

        cout<<"First occurance of 4 is: "<<firstOcc(arr,0,9,3)<<endl;
        cout<<"Last occurance of 4 is: "<<lastOcc(arr,0,9,3)<<endl;


    return 0;


}



