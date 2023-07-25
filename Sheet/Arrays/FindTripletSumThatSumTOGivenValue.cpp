//Time COmplexicty : O<n^2)
//space complexity : O(1)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool tripletSum(int arr[],int n,int target){
    int l,r;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
       l = i+1;
       r= n-1;
       while(l<r){
           if((arr[i]+arr[l]+arr[r])==target){
                //printf("Triplet is %d, %d, %d", arr[i], arr[l],arr[r]);
                return true;
           }
           else if(((arr[i]+arr[l]+arr[r])<target)){
               l++;
           }
           else{
               r--;
           }
       }
   }
   return false;
}

int main() {
    int arr[6];
    cout<<"enter arr elemens"<<endl;
     int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = 13;
   bool res = tripletSum(arr,n,target);
   cout<<res<<endl;
}

/////////////////////////////////DRY RUN //////////////////////////////////////
// arr = [1 4 45 6 10 8]
//        0 1  2 3  4 5

// sort = 1 4 6 8 10 45
//        0 1 2 3 4  5
// n = 6

// target = 13
// l = i+1
// r = n-1
// loop till n-2
// i = 0 l = 1, r=5
// l<r arr[i]+arr[i]+arr[r] = 1+4+45 > target r--
// r= 4   1+4+10 >target r--
// r=3 1+4+8 == target return true

// n = 5, X = 10
// arr[] = [1 2 4 3 6]
// sort = [1 2 3 4 6]
//         0 1 2 3 4
// i=0 , l=1,r=4
// l< r   1+2+6 <10 l++
// l=2
// l<r  1+3+6 ==10 return true  
