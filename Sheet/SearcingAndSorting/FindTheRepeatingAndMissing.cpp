//time complexity : O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=2;
   int arr[2]={2,2};
   int repeat=-1,miss=-1;
   //use array as indexes and mark as negative 
    //if negative already exist then it is repeated
   for(int i=0;i<n;i++){
       if(arr[abs(arr[i])-1]>0){
           arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
       }else{
          repeat=abs(arr[i]);
       }
   }
   //for missing traverse array  again and find positive value
   for(int i=0;i<n;i++){
       if(arr[i]>0){
           miss=i+1;
       }
   }
   cout<<repeat<<" "<<miss;
}

//////////////////////////////////////DRY RUN //////////////////////////////////////////
// N = 3
// Arr[] = {1, 3, 3}
// Output: 3 2

// -1 3 -3

// for loop 
// arr[abs(arr[0])-1]>0 arr[1-1]>0 arr[0]>0 yes
// arr[abs(arr[0])-1]=-arr[abs(arr[0])-1]> = -1

// arr[abs(arr[1])-1]>0 = arr[3-1]>0 =arr[2]>0 yes
// arr[abs(arr[1])-1]=-arr[abs(arr[1])-1]> = -1 3 -3

// arr[abs(arr[2])-1]>0 arr[abs(-3)-1]>=arr[2]>0 no
// ans-pusn_back(abs(arr[i]) = arr[2] = 3

// missing
// for loop 
// arr=-1 3 -3
// arr[0]>0 no
// arr[1]>0 yes 
// ans.push_back(i+1) = 1+1 2
// ans = 3 2 

