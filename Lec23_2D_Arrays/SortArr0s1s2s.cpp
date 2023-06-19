// sort array containing 0 1 and 2 without using any sorting algo
//this is counting approach solution
#include <iostream>
using namespace std;

void sortArr(int arr[],int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    int i ;
    for(i=0;i<n;i++){
        switch(arr[i]){
            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
        }
    }
    i=0;
    while(cnt0>0){
        arr[i++]=0;
        cnt0--;
    }
    while(cnt1>0){
        arr[i++]=1;
        cnt1--;
    }
    while(cnt2>0){
        arr[i++]=2;
        cnt2--;
    }
    //print arr
    for(i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
int main() {
    // Write C++ code here
    int arr[] = {0,2,1,2,0};
    int n = sizeof(arr)/sizeof(int);
    sortArr(arr,n);

    //return 0;
}