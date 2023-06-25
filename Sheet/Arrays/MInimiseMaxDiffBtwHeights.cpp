////////////not working n Programiz but working in GDB
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minDiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int tempMin = arr[0];
   int tempMax = arr[n-1];
   int ans  = tempMax - tempMin;
   for(int i=1;i<n;i++){
       if(arr[i]-k<0){
           continue;
       }
       //adding k to every element 
       tempMin = min(arr[0]+k,arr[i]-k);
       //max when subtrating k from every element 
       tempMax = max(arr[i-1]+k,arr[n-1]-k);
       ans  = min(ans,tempMax-tempMin);
   }
    return ans;
}

int main() {
   int n = 5;
   int k =  3;
   int arr[n];
   cout<<"enter the array elements"<<" ";
   for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res =  minDiff(arr,n,k);
    cout<<res<<endl;
}