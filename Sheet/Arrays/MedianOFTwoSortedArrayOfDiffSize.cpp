//time complexity : O(log2(min(n1,n2))
//space complexity : O(1)
#include <bits/stdc++.h>
using namespace std;

double medianOfArr(vector<int>& arr1,vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int low = 0;
    int high  = n1;
    while(low<=high){
        int cut1 = (low+high)/2;
        int cut2 = (n1+n2+1)/2-cut1;
        
        int left1 = cut1==0 ? INT_MIN : arr1[cut1-1];
        int left2 = cut2==0 ? INT_MIN : arr2[cut2-1];
        
        int right1 = cut1==n1 ? INT_MAX : arr1[cut1];
        int right2 = cut2==n2 ? INT_MAX : arr2[cut2];
        
        if(left1<=right2 && left2<=right1){
            if((n1+n2)%2==0){
                return (max(left1,left2) + min(right1,right2))/2.0;
            }
            else{
                return max(left1,left2);
            }
        }
        else if(left1>right2){
            high = cut1-1;
        }
        else{
            low = cut1+1;
        }
    }
    return 0.0;

}

int main() {
   int n1 = 2; 
   int n2 = 4;
   vector<int> arr1 = {4,6};
   vector<int> arr2 = {1,2,3,5};
   cout<<medianOfArr(arr1,arr2)<<endl;

}

////////////////////////////////////DRY RUN Not working properly ///////////////////////////////
// m = 3, n = 4
// 	      0 1 2
// array1[] = {1,5,9}
//             0 1 2 3 
// array2[] = {2,3,6,7}
// Output: 5

// n1 = 3
// n2 = 4
// low = 0
// high = 3
// while(low<=high)0<=3

// cut1 = 3+4/2  = 3   1 5 9 cut1
// cut2 = 3+4+1/2 - cut1 = 8/2-3 = 4-3 = 1  arr2 = 2 3cut2 6 7 

// left1= array1[cut1-1]  = arr1[3-1]  = arr1[2] = 9 
// left2 = arr2[cut2-1] = arr2[1-1] = arr2[0] = 2

// right1 = arr1[cut1] = arr1[3] = 0  = INT+MIN 
// right2= arr2[cut2] = arr2[1] = 3 

// left1 9  right1 INT_MIN or 0 
// left2 2  right2 3

// left1<=right2 and left2<=right1
// 9<=3   0<=2 

// else if(left1>right20 yes high = cut1-1 high = 2

// while(0<=2)
// cut1= 0+2/2 = 1
// cut2 = 3+4+1/2-cut1 = 8/2-3 =1

// left1 = arr1[cut1-1] = arr1[1-1] = arr1[0] = 1
// left2 = arr2[cut2-1] = arr2[1-1]=arr2[0]  =2

// right1 = arr1[cut1] = arr1[1] = 5
// right2 = arr2[cut2]= arr2[1] = 3  

// 1  5
// 2  3

// if(left1<=right2 and left2<=right1) 1<=3 and 2<=5 yes
// if(n1+n2)%2 ==0 3+4/2 ==0 no
// else return max(left1,left2) max(1,2)  = 2 
