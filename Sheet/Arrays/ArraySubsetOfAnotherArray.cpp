//Time complexity : O(n)
//Space complexity : O(n)
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string isSubset(int a1[],int a2[],int n,int m){
   //using hashmaps or unordered maps 
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
       mp[a1[i]] = 1; // 1 1 1 1 1 1 1 
   }
   for(int i=0;i<n;i++){
       mp[a1[i]] = mp[a1[i]]+1; // 2 2 2 2 3 2 2 
   }
   for(int i=0;i<m;i++){
       if(mp.find(a2[i]) == mp.end() || mp[a2[i]]==1){
           return "No"; //no elememts differ for this particluar test case this loo will empty
       }
       else{
           mp[a2[i]]-=1; // 1 1 2 
       }
   }
    return "Yes";
}

int main() {
  int a1[] = {1, 2, 3, 4, 4, 5, 6};
  int a2[] = {1, 2, 4};
   int n= sizeof(a1)/sizeof(a1[0]);
   int m = sizeof(a2)/sizeof(a2[0]);
   unordered_map<int,int>mp;
    string res = isSubset(a1,a2,n,m);
    cout<<res<<endl;
}
//////////////////DRY RUN ///////////////////////////////
// a1[] = {1, 2, 3, 4, 4, 5, 6};
//  a2[] = {1, 2, 4};
// n = 7
// m = 3
// first loop and set all elements to and set freuency to 1
// mp[a1[i] = i                        a1 =  1 1 1 1 1 1 1 
// second loop and increase frency by 1 a1 = 2 2 2 2 3 2 2  at index 4 4 came twice to frequncy increased
// third loop
// if there are no elements matching it goes at the end iterator and mp.end() methods cheks that 
// so iterate and check if mp[a2[i]] ===mp.end() 
// or mp[a2[i]] ==1  minimum frequency assigned by defaultis 1  means elements is not there  
// i=0 mp.find(a2[0]) = mp.end() 1 is there mp[a2[0]] = -1 = a1 = 1 2 2 2 3 2 2
// i = 1  2 is there mp[a2[1]] = -1 a1 = 1 1 2 2 3 2 2 
// i = 2 4 4 is there mp[a2[2]] = -1  a1  =  1 1 2 2 2 2 2 