#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start = 0;
    int end = n -1;
   /* int mid = (start + end)/2;  // this will give error when s = 2^31 -1 and e = 2^31-1.  */

    int mid = start + (end-start)/2;


    while(start <= end){

        if(arr[mid] == key) {
            return mid;
        }else if(arr[mid] >key ) {
            end = mid -1;
        } else {
            start = mid +1;
        }


        // mid = (start + end)/2;
    mid = start + (end-start)/2;

    }

    return -1;
}





int main() {


    int even[6] = {0,1,2,3,4,5};
    int odd[9] =  {0,1,2,3,4,5,6,7,8};

    int result = binarySearch(odd,9,7);
    cout<<"position of key:7 at: "<<result<<endl;




}