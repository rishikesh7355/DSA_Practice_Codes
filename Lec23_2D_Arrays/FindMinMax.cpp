// maximum and mimimum element is array
#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair findMinMax(int arr[], int n){
    struct Pair minmax;
    //if there is only one element
    if(n==1){
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    //if there are more than one element
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main() {
   int arr[5];
   int n =sizeof(arr)/sizeof(arr[0]);
   cout<<"enter array elements"<<endl;
   for (int i =0;i<n;i++){
       cin>>arr[i];
   }
   struct Pair minmax = findMinMax(arr,n);
   cout<<"minimum is : "<<minmax.min<<endl;
   cout<<"maximum is : "<<minmax.max<<endl;

    // return 0;
}