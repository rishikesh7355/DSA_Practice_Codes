#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std;

/////////////Dry Run ///////////////////////
//time complexcity : O(n)
// space complexcity: o(1) 

// n=4 , k=6
// arr = [1 5  7 1]
// count = 0
// unordered mp;
// we need to find pairs (a,b) here a= arr[i] and b = k-arr[i] with frequency
// i = 0; b= k-arr[0] = 5; not in map so put in map = [5 -> 1] count = 0
// i= 1;b= k-arr[1] = 1; map = [5 ->1 , 1 -> 1] count = 1
// i= 2; b=k-arr[2] = -1 ; not in map ignore
// i = 3 ;b= k-arr[3] = 5 = [5 ->2 , 1 ->1] count 2
int countPairs(int arr[],int n,int k){
   unordered_map<int,int>mp;
   int count=0;
   for(int i=0;i<n;i++){
       int b = k-arr[i];
       if(mp[b]){
           count+=mp[b]; //increase frequency if already there 
       }
       mp[arr[i]]++; // this has to be done always if element not in map put in map 
   }
   return count;
}

int main() {
   int arr[4];
   int n = sizeof(arr)/sizeof(int);
   cout<<"enter elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int k=6;
   int res = countPairs(arr,n,6);
   cout<<res<<endl;
//   sort(arr.begin(),arr.end());
//   int left = 0;
//   int right=n-1;
//   int count=0;
//   while(left<right){
//       int sum = arr[left] + arr[right];
//       if(sum==k){
//           count++;
//       }
//       else if(sum<k){
//           left++;
//       }
//       else {
//           right--;
//       }
//   }

}