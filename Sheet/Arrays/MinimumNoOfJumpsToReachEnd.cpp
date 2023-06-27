// minimum number of jumps to reach end of array 
//time complexicity : O(n)
//space : O(1)
#include <iostream>
using namespace std;

int minJumps(int arr[],int n){
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;
    //base case if arr has only one element
    if(n==1) return 0;
    //if first element is 0
    else if(arr[0]==0) return -1;
    else{
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxReach = max(maxReach,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxReach){
                    return -1;
                }
                step = maxReach-1;
            }
            
        }
    }
    
}

int main() {
    // Write C++ code here
   int arr[11];
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"enter array elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   int res = minJumps(arr,n);
   cout<<res<<endl;
   

    return 0;
}