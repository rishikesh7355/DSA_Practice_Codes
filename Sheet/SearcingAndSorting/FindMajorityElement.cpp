//time complexity : O(n)
//space comlexity : O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter arr elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=-1;
    unordered_map<int,int>ans;
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    n=n/2;
    for(auto i:ans){
        if(i.second>n){
            count=i.first;
        }
    }
    if(count>0)
        cout<<count<<endl;
    else
        cout<<count;
    
}


///////////////////////////////////////////////DRY RUN //////////////////////////////////////
// size=: 2
// first:2 second:1 first:1 second:1 first:3 second:3

// n=5
// arr = 3 1 3 3 2
//       0 1 2 3 4 
// unoredered_map<int,int>ans
// for loop
// i=0
// ans[arr[i]]++ ans[arr[0]]++  ans[3]++      0 0 0 1 0
// ans[arr[i]]++ ans[arr[1]]++  ans[1]++      0 1 0 1 0
// ans[arr[i]]++ ans[arr[2]]++  ans[3]++      0 1 0 2 0
// ans[arr[i]]++ ans[arr[3]]++  ans[3]++      0 1 0 3 0
// ans[arr[i]]++ ans[arr[4]]++  ans[2]++      0 1 1 3 0
// or 1 1 2 3 1
// size=size/2 = 2
// for(auto i: ans)
// if(i.second>size) yes 3
//       count=i.first
