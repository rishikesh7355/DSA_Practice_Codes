#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3,1,2,2,1,2,3,3};
    int k = 4;
    int n = sizeof(arr)/sizeof(int);
    int x= n/k;
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i: mp){
        if(i.second>x){
            count++;
        }
    }
    cout<<count;
}
////////////////////DRY  RUN  ////////////////////////////
 //checking how mp working 
        // cout<<i.first<<"=>"<<i.second<<endl; 
        // output: 2=>3
        //         1=>2
        //         3=>3
////////////////////////dry run /////////////////////
//unordered map put elements in random order
//after putting in map = {1 1 1 2 2 3 2 3 2 }
//it has stored frequency also at second position  so loop and check
//here x = 2 and 2 and 3 elements are repeated more than 2 times 
//so count is 2