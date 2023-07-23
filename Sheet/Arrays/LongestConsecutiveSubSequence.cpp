//Time Complexity : O(n)
//Space complexity : O(n)
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longestConsecutiveSubSeq(int arr[],int n){
    int ans = 0;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }
        else{
            int j=arr[i];
            while(s.find(j)!=s.end()){
                j++;
            }
            ans = max(ans,j-arr[i]);
        }
    }
    return ans;
}

int main() {
    int arr[6];
    int n = sizeof(arr)/sizeof(int);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = longestConsecutiveSubSeq(arr,n);
    cout<<res<<endl;

}
/////////////////////////////////      DRY RUN     //////////////////////////////
// arr = [2 6 1 9 4 5 3 ]
//        0 1 2 3 4 5 6
// n = 7
// loop an put elements in  set  = {2 6 1 9 4 5 3 }
// loop in set and check if previous number is present 
// if it is then it is not the starting  
// else if previous not present then that is the starting point 
// check next num after that and increase count

// i=0 arr[0]-1 ! = s.end()  1 present continue
// i=1 arr[1]-1 ! = s.end()   5 present continue
// i=2 arr[2]-1 0 not present this can be strting point goto else
// j = arr[i] = arr[2] = 1 j++ 1 2 3 4 5 6  j = 7
// ans = max(0,j-arr[i]) max(0,7-1) = 5
// i=3 8 not present goto else j = arr[3] = 9 no sequence
// i=4 3 present continue
// i=5 4 present continue
// i=6 2 present coninue 



