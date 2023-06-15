// program to reverse array
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void printArr(int arr[],int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
        // cout<<endl;
    }
}
int main() {
   int arr[5];
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"enter elements of array";
   for(int i=0;i<n;i++){
        cin >> arr[i];
   }
   cout<< "original array is "<<endl;
   printArr(arr,n);
   reverseArray(arr,0,n-1);
   cout<<"reversend array is"<<endl;
   printArr(arr,n);
   return 0;
   
}