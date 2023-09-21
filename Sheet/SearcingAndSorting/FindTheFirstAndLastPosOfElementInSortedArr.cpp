//Time complexity :O(logN)
//Space Complexity:O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[9]={ 1, 3, 5, 5, 5, 5, 7, 123, 125 };
    int x=7;
    int n=9;
    // int ans[2];
    int count=0,first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            last=i;
            count++;
        }
    }
    if(last==-1){
        first=-1;
    }
    else{
        first=last-(count-1);
    }
    // ans[0]=first;
    // ans[1]=last;
    cout<<first<<" "<<last;
    
}
// //////////////////////////////DRY RUN /////////////////////////////////
// n=9, x=7
// arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
//           0  1  2   3 4  5  6  7     8
// Output:  
// 6 6
// count=0 f=-1 l=-1
// i=0 arr[0]==7 no 
// i=1 3==7 no
// i=3 5==7 no
// i=4 5==7 no
// i=5 5==7no
// i=6 7==7 yes last =i=6 count=1
// i=7 123==7 no
// i=8  125==7  no
// last!=-1
// so else first=last-(count-1) = 6-(1-1) = 6 ans = 6 6 

// n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  
// 2 5
// i=0 1==5 no
// i=1 3==5 no
// i=2 5==5 yes last=2 count=1
// i=3 5==5 yes last 3 count=2
// i=4 5==5 yes last 4 count=3
// i=5 5==5 yes last=5 count=4
// i=6,7,8 !=5 
// else first=last-(count-1) => 5-(4-1) =2  
// ans=2 5  



