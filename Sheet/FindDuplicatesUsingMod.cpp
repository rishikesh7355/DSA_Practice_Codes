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
    


}