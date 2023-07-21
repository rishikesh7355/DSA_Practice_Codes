#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// long long int maxProduct(int arr[],int n){
//      long long int ans = INT_MIN;
//     long long int pref = 1;
//     long long int suff = 1;
//     for(int i=0;i<n;i++){
//         if(pref==0) pref = 1;
//         if(suff==0) suff = 1;
//         pref = pref *arr[i];
//         suff = suff* arr[n-i-1];
//         ans=max(ans,max(pref,suff));
//     }
//     return ans
// }
int main() {
    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    cout<<"enter elemtss"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    int ans = 0;
    int pref = 1;
    int suff = 1;
    for(int i=0;i<n;i++){
        if(pref==0) pref = 1;
        if(suff==0) suff = 1;
        pref = pref *arr[i];
        suff = suff* arr[n-i-1];
        ans=max(ans,max(pref,suff));
    }
    cout<< ans ;
    }
}


/////////////////////////////  DRY RUN  //////////////////////////////////////////////////
// arr = [6 -3 -10 0 2 ] 
//        0  1  2  3 4
// n = 5 
// pre = 1
// suff = 1
// i = 0 
// pref = 1*arr[0] = 6
// suf = 1* suff[5-0-1] = 1*suff[4] = 2  
// ans = max(ans,max(6,2)) = 6
// i=1
// pref = 6*arr[1] = -18
// suff = 2*arr[5-1-1] = 2*arr[3] = 0 reset suff = 1
// ans = max(6,max(-18,1)) = 6

// i=2
// pref = -18 * arr[2] = 180
// suff = 1 * arr[6-2-1] 1*arr[3] = 0  reset => suff  = 1
// ans = max(6,max(180,1)) =  180 

// i=3
// pref = 180 * arr[3]  = 0 reset => pref = 1
// suff = 1 * arr[6-3-1] = 1 *arr[2]  = -10
// ans = max(180,max(suf,pref)) = 180

// i=4
// pref = 1*2 = 2
// suff = -10 * arr[6-1-4] = -10*arr[1] = -10 * - 3  = 30 
// ans = max(int_min , max(pre,suff)) = 180


      