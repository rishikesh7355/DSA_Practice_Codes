//time complexity : O(NLogN)
//space complexity : O(1)

#include <bits/stdc++.h>
using namespace std;
//using inbuilt function
//builtin_popcount returns nuumber of setbits present in number applicable for  unsigned int i.e. binary form  of positive integer 
//complexity O(b) where b is number of setbits 
//for long long integer it becomes __builtin_popcountll(long long int )
static bool comp(int a,int b){
    return __builtin_popcount(a)>__builtin_popcount(b);
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6};//  {5, 2, 3, 9, 4, 6, 7, 15, 32};
    int n=sizeof(arr)/sizeof(arr[0]);
    //swe can use sort also but stable_sort beacuse it keeps the element which has same number of set bits inorder they ocurred in original array
    stable_sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//////////////////////////method two wihotut buit in pop count  ////////////////////////////////////////
////////////this one showing time limit exceeded 65/80 test passed 
// #include <bits/stdc++.h>
// using namespace std;
// //using inbuilt function

// int countSetBits(int a){
//     int count=0;
//     while(a){
//         if(a&1){
//             count+=1;
//         }
//         a=a>>1;
//     }
//     return count;
// }
// //comparator function
// int comp(int a,int b){
//     int c1=countSetBits(a);
//     int c2=countSetBits(b);
//     if(c1<=c2){
//         return false;
//     }
//     return true;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};//  {5, 2, 3, 9, 4, 6, 7, 15, 32};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     stable_sort(arr,arr+n,comp);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }