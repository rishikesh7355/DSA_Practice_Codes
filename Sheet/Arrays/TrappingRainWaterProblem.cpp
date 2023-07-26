// Time complexity : O(n)
// space complexity : O(1)
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int trapRainWater(int arr[],int n){
    int res = 0;
    int l = 0;
    int r = n-1;
    int lMax = 0;
    int rMax = 0;
    while(l<=r){
        if(arr[l]<=arr[r]){
            if(arr[l]>=lMax){
                lMax = arr[l];
            }
            else{
                res =res + lMax-arr[l];
            }
            l++;
        }
        else{
            if(arr[r]>=rMax){
                rMax = arr[r];
            }else{
                res = res + rMax-arr[r];
            }
            r--;
        }
    }
    return res;
}

int main() {
   int arr[4] ,n ;
   n = sizeof(arr)/sizeof(arr[0]);
   cout<<"enter block heights"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int res = trapRainWater(arr,n);
   cout<<res<<endl;
}
// ////////////////////////  DRY RUN  /////////////////////////////////////////////

// arr = [7 4 0 9 ]
//        0 1 2 3
// n = 4
// l = 0 r = 3 lmax = 0 rmax = 0 res = 0
// while(l<=r) 0<3
//   arr[l]<=arr[r] = 7<9 yes
// 	arr[l]>=lmax => 7>0
// 		lmax = 7 
// 	l++ =>l=1
// 1<3
// 	arr[1]<=arr[3] =>4<9 yes 
// 		arr[1]>=lmax
// 		if 4>=7 No gotoElse update res
// 		else res = res+lmax-arr[l] = 0+7-arr[1] = 0+7-4 = 3
// 		res = 3
// 		l++ => l=2
// 2<3
// 	arr[2]<arr[3] = 0<9 yes
// 		if arr[l]>=lmax = arr[2]>=lmax = 0>=7 NO goto else update res
// 		else res = res + lmax-arr[2] = 3+ 7-0 = 10
// 		res = 10 l++
// 		l = 3
// 3<=3   arr[3]<=arr[3] 9==9
// 		9>=lmax
// 		lmax=9
// 		l++ == l will become 4 i.e l>r and there are no array elemets stop 

// ///////////////////////another dry run ///////////////////////////////

// arr2 = [6 9 9]
//         0 1 2
// n=3
// l = 0 r = 2 lMax = 0 rMax=  0 res = 0
// l<r yes
// 	arr[l]<=arr[r]
// 	 6<9 yes
// 	 6>=lMax yes Lmax =6 l++ l=1
// 1<=2  arr[1]<=arr[2] 9<=9 yes
// 	arr[1]>=lMax = 9 >=6 lMax= 9 l++ l = 2
// 2<=2  arr[2]<=arr[2] 9==9
// 		9>=Lmax lMax = 9 l++ array finished return res = 0		
		
	
		
					