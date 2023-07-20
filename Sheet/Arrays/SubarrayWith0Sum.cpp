#include <iostream>
#include <bits/stdc++.h>
using namespace std;
////////////////////////   DRY RUN   ////////////////////////////////
// arr = 4 2 -3 1 6
//          0 1 2 3 4
// n=5 sum = 0 uset = {}
// i=0 sum = sum + arr[0] = 4 uset = {4}
// i=1 sum = 6 uset = {4,2}
// i=2 sum = 3 uset = {4,2,3}
// i=3 sum = 4 uset ={4,2,3,4} return true
// i=4 sum = 10 uset = {4,2,3,4,10} 

// /// arr = 4 2 0 1 6 
// i= 0 sum = 4 uset = {4}
// i=1 sum  = 6 uset = {4,6}
// i=2 sum = 6 uset = {4,6,6} return true
// i= 3 = sum 7 uset = {4,6,6,7}
// i=4 sum  = 13 uset = {4,6,6,7,13}

bool subArray(int arr[], int n){
    unordered_set<int> uset;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0 || uset.find(sum)!=uset.end())
            return true;
        uset.insert(sum);
    }
    return false;
}

int main() {
    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = subArray(arr,n);
    if(res)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
}