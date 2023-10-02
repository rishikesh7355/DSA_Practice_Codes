//time complexity : O(n)
//space complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
 //method 1 : get product of all elements and then divide total product by each array element
 // method 2 : below is method 2  without division operator;

int main() {
    int nums[]= {12,0}; // {10, 3, 5, 6, 2};
    int n=sizeof(nums)/sizeof(nums[0]);
    int l[n],r[n];
    l[0]=1;
    r[n-1]=1;
    for(int i=1;i<n;i++){
        l[i]=l[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        r[i]=r[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        nums[i]=l[i]*r[i];
        cout<<nums[i]<<" ";
    }
}

/////////////////////////////////////////////////DRY RUN //////////////////////////////////////
// n = 5
// nums[] = {10, 3, 5, 6, 2}
//            0  1  2  3  4
// Output:
// 180 600 360 300 900

// l[0]=1
// r[n-1]=1 , r[4]=1
// for loop i=1 i<5
//    l[i]=l[i-1]*nums[i-1]
//    l[1] = l[0]*nums[0] = 1*10=10
//    l[2] = l[1]*nums[1] = 10*3 = 30
//    l[3] = l[2]*nums[2] = 30*5 = 150
//    l[4] = l[3]*nums[3] = 150*6 = 900
// for loop i=n-2=3 i>=0 i--
// 	r[i]=r[i+1]*nums[i+1]
// 	r[3]=r[4]*nums[4] = 1*2=2
// 	r[2]=r[3]*nums[3] = 2*6 = 12
// 	r[1]=r[2]*nums[2] = 12*5 = 60
// 	r[0]=r[1]*nums[1] = 60*3 = 180
// for loop 
//  nums[i]=l[i]*r[i]
// nums[0]=l[0]*r[0] = 1*180 =180
// nums[1]= l[1]*r[1] = 10*60 = 600
// nums[2]= l[2]*r[2] = 30*12 = 360
// nums[3]= l[3]*r[3] = 150*20 = 300
// nums[4]= l[4]*r[4] = 900*1 = 900




	
   
	