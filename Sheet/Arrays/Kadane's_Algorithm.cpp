// Kadane's Algorithm
//largest sum contiguous subarray 
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    int arr[5];
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"enter array elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   long long  max_so_far = INT_MIN;
   int max_ending_here = 0;
   for(int i=0;i<n;i++){
       max_ending_here = max_ending_here + arr[i];
       if(max_so_far<max_ending_here){
           max_so_far = max_ending_here;
       }
       if(max_ending_here<0){
           max_ending_here = 0;
        }
   }
   cout<< max_so_far<<endl;

}