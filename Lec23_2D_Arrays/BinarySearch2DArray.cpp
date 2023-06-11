// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool binarySearch2D(int arr[][3],int row,int col,int target){
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int mid2D = arr[mid/col][mid%col];
        if(mid2D==target){
            // cout<< "found" <<endl;
            return 1;
        }
        else if(mid2D<target){
            start=mid2D+1;
        }
        else {
            end=mid2D-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main() {
    // Binary search in 2D array
    int row;
    int col;
    int arr[3][3];
    
    cout<<"enter row";
    cin>>row;
    cout<<"enter column";
    cin>>col;
    cout<<"enter array elements "<< endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"enter target number"<<endl;
    cin>>target;
    // binarySearch2D(arr,row,col,target);
    int res = binarySearch2D(arr,row,col,target);
    if(res){
        cout<<"yes found"<<endl;
    }
    else {
        cout<<"Not found"<<endl;
    }
    

    return 0;
}