////////////  not working    ////////////////////
/////////////////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

int merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int left  = low;
    int right = mid +1; 
    int count = 0; //modification 1
    while(left<=low && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count+=(mid-left+1); ///modfication 2 in merge sort
            right++;
        }
    }
    return count; //modification 3
    //if elements are still lefft in the left half
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    //trasfer all elements from temp to arr
    for(int i=low;i<high;i++){
        arr[i]=temp[i-low];
    }
    
}
int mergeSort(int arr[],int low, int high){
    int count=0;
    int mid = low+(high-low)/2;
    if(low>=high) return count;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}

int main() {
    // Write C++ code here
    vector<int> arr[5];
    int N = sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the number of elements"<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int res = mergeSort(arr,0,N-1);
    return res;
}