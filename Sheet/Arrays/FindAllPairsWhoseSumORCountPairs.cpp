#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std;

int countPairs(int arr[],int n,int k){
   unordered_map<int,int>mp;
   int count=0;
   for(int i=0;i<n;i++){
       int b = k-arr[i];
       if(mp[b]){
           count+=mp[b];
       }
       mp[arr[i]]++;
   }
   return count;
}

int main() {
   int arr[4];
   int n = sizeof(arr[0])/sizeof(int);
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