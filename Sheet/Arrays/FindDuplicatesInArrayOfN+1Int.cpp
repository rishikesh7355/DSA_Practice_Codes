//find duplicates in an array with n+1 elements
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[7];
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter arr elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //create a freqency of arrays
    // like arr = {1 3 2 3 4 } 
    // freq = {0 0 0 0 0 }
    //loop thorugh each index and increase it by one of its 0 
    //if not then its frequency is more than one an re[eated so return repated numberv
    int freq[n+1]={0};
    int ans;
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==0){
            freq[arr[i]]+=1;
        }
        else {
            cout<< arr[i]<< ' ';
        }
    }
    // return 0;
}