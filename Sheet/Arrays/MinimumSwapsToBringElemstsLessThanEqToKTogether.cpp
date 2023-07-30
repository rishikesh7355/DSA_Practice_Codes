//Time complexity : O(N)
//Space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int minSwapsCount(int arr[],int n ,int k){
    int count=0;
    for(int i=0;i<n;++i){
        if(arr[i]<=k){
            ++count;
        }
    }
    int bad = 0;
    for(int i=0;i<count;++i){
        if(arr[i]>k){
            ++bad;
        }
    }
    int ans=bad;
    for(int i=0,j=count;j<n;++i,++j){
        if(arr[i]>k){
            --bad;
        }
        if(arr[j]>k){
            ++bad;
            
        }
        ans=min(ans,bad);
    }
    return ans;
}

int main() {
   int n,k;
    cout<<"enter value of n"<<endl;
   cin>>n;
    cout<<"enter value of k"<<endl;
   cin>>k;
   cout<<"enter array elements"<<endl;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<minSwapsCount(arr,n,k)<<endl;
}

///////////////////////////////// DRY RUN ///////////////////////////////////////////////
// arr[ ] = {2, 1, 5, 6, 3} 
//           0  1  2  3  4
// K = 3
// Output : 1
// so main task is to bring lemets <=K together so there will be swaps required 
// loop and count how many elements are less than k first
// count = 0
// for(int i=0;i<n;++i) if arr[i] <=k count++
// 2<3 count 1  1<3 count 2 5<3 No 6<3 no  3<=3 count 3
// loop again and count greater than k bad elemtls
// int bad = 0 
// for(int i=0;i<count;++i) if(arr[i]>k) bad++
// bad = 1 since among 2 1 5  only 5 > k 
// loop again using two pointer i j  or sliding window to check for less no of swaps with k or 3 elemts at a time
// ans=bad
// for(int i=0,j=count;j<n;++i;++j) j<5
// if arr[i]>k arr[0]>3 2> 3 no 
// if arr[j]>k arr[3]>3 6>3  ++bad bad=2 ans = min(ans,bad) ans = min(1,2) ans 1 ++i ++j
// now i=1 j=4
// arr[i]>k arr[1]>3 1>3 no
// arr[j]>k arr[4]>3 3>3 no  ans =min(ans,bad) ans = min(1,2)
// ans =1 loop and as j<n 4<5


// arr[ ] = {2, 7, 9, 5, 8, 7, 4} 
//           0  1  2  3  4  5  6
// K = 6 
// Output :  2 
// coount <k  = 3
// bad <k and less than index count bad<index 3 
// 2 7 9 5 greater than 6 are 2
// bad = 2
// ans = bad
// last loop 
// for(int i=0,j=count;j<n;++i,++j)
// ans=2 j=3 j<7
// i=0 j=3 arr[0]>6 no arr[3]>6 no ans=min(ans,bad) ans  = min(2,2)  = 2
// i=1;j=4 arr[1]>6 yes --bad bad = 1 arr[4]>6 yes ++bad bad = 2 ans =2
// i=2lj=5 arr[2]>6 yes --bad bad =  1 arr[5]>6 yes ++bad bad = 2 ans =2
// i=3; j=6 arr[3]>6 no arr[6]>6 no 
// return ans =2 