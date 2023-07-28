//timeComplexity : O(N)
//space complexity : O(1)
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int minSubArray(int arr[],int n,int x){
    int curr_sum,end,start = 0;
    int min_len = INT_MAX;
    while(end<n){
        //keep adding utill it exceeds x
        while(curr_sum<=x && end<n){
            curr_sum+=arr[end];
            end++;
        }
        //if curr_sum >=x and start <n means array values are still remaining
        //first store the min_lenth and 
        //then decrease the value by subtrating arr elemts one by one 
        //to check for smaller arrary length
        while(curr_sum>x && start<n){
            if(end-start<min_len){
                min_len = end-start;
            }
            curr_sum-=arr[start];
            start++;
        }
        
    }
    if(min_len!=INT_MAX){
        return min_len;
    }
    else{
        return 0;
    }
    
}

int main() {
    int x;
    cout<<"enter value of x to find subsrray "<<endl;
    cin>>x;
    int n;
    cout<<"enter total numbers in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elments"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = minSubArray(arr,n,x);
    cout<<res<<endl;
}

//////////////////////////// DRY RUN  //////////////////////////////////////////////
// a[] = {1, 4, 45, 6, 0, 19}
//        0  1   2  3   4  5
// n = 6
// x  =  51

// curr_sum = 0 min_len = n+1 = 6
// start = 0 end = 0
// while(end<n) = 0<6
// 		while(curr_sum<=x && end <n )
// 			0<=51 && 0<6
// 				curr_sum = curr_sum+arr[end++]
// 							1 + 4 +45 + 6 length = 4 
// 					curr_sum  = 1 5 50 56 now 56 greater than x
// 		while(56>x && start< n(0<6))
// 			if(end-start<min_len) 4-0 < 6 min_len = 4-0 = 4	
// 			not we will reduce sum one by one from current sum to check 
// 			if it can be done in minimum length
// 			curr_sum = curr_sum - arr[start++] (start = 0)= 56 - arr[0] = 56-1 = 55 
// 			start++ = 1 = 55-arr[1] = 55-4 = 51 but 51 ===x we need greater than that so
// 			only one lement can be reunced and min_lenth becomes = 3
// 			and array becomes = 1(removed)+  4 +45+ 6 to 4+ 45 +6
// 		now again go to while loop and continue sum 
// 		55 + 0  = 55 55 + 19 =74  >x come to 3rd while loop to reduce lentgh
// 		74 - 4 = 70 than 70 -45 = 25 which becomes smaller than x
// 		so next possible array is 45 6 0 49 lenngth 4 and sum 70
// 		but we already have smaller subrray 4 45 6 with lenth 3 so return 