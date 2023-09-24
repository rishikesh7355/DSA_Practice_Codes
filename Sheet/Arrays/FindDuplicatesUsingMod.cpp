///////////only logic see its not correctly working if array has no duplicate only in online compiler
// pogrmiizz but working in gfg using vector
//find duplicates in array by mod method 
//loop and store the index of elements by taking mod by array length and add arr[index]+n o every element
//again loop to check if any number >=2 so its repeated or duplicate
//
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter array elemtns"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int index = arr[i]%n;
        arr[index]+=n;
    }
    for(int i=0;i<n;i++){
        if((arr[i]/n) >=2){
            cout<<i<<' ';
        }
        // else {
        //     cout<<-1;
        //     break;
        // }
    }
    /////////////////////////////////////////dry run ////////////////////////////////
//     N = 5
// a[] = {2,3,1,2,3}
//        0 1 2 3 4
// for loop
//  index = arr[0]%5 = 2%5 = 2
// i=0	arr[2]=arr[2]+n 
// 	arr[2 3 6 2 3 ]
// i=1	arr[1]%5 == 3%5 = 3  
// 	arr[3]=arr[3]+n  
// 	arr=2 3 6 7 3
// i=2 arr[2]%n= 6%5 = 1
// arr[1]=arr[1]+n 
//arr = 2 8 6 7 3 
// i=3	arr[3]=arr[3]%n= 7%5=2
// 	arr[2]=arrr[2]+n
// 	arr=2 8 11 7 3
// i=4  arr[4]=arr[4]%5 = 3%5=3
// 	arr[3]=arr[3]+n
// 	arr= 2 8 11 12 8

// for loop
// 	arr[0]/n>=2  = no
// 	arr[1]/n>=2 = no
// 	arr[2]/n>=2 yes 2
// 	arr[3]/n>=2 = yes
//  arr[4]/n>=2 = no


}