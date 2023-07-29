//Time complexity : O(n)
//space complexity : O(1)
#include<bits/stdc++.h>
using namespace std;

void threeWayPartitioning(int arr[],int n, int a,int b){
    int start=0;
    int end = n-1;
    int i=0;
    while(i<=end){
        if(arr[i]<a){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else if(arr[i]>b){
            swap(arr[i],arr[end]);
            end--;
        }
        else{
            i++;
        }
    }
    
}

int main() {
    int arr[]
        =  {1, 2, 3, 3, 4};
        // { 1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    threeWayPartitioning(arr, n, 1, 2);

    cout<<"sorted array by three way partitioning order does not matter"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

///////////////////////////////DRY RUN /////////////////////////////////////////////
// n = 5
// arr[] = {1, 2, 3, 3, 4}
//          0  1  2  3  4
// [a, b] = [1, 2]
// //by sortung also possible but time complexity will be O(nlog(n))
// // optmal approach
// start = 0
// end = n-1 = 4
// i=0
// while(i<=end)
// if(arr[i]<a) 
// arr[0]<1  1<1 no goto else if 1>b 1>2 no goto else i++ i=1 now
// arr[1]<a 2<1 no  goto else if check if greater than b
// arr[1]>b 2>2 no goto else  i++ i=2 now
// arr[2]<a 3< a no goto else if
// arr[2]>b 3>2 yes swap(arr[2],arr[end]) swap(3,4) only  end -- end =3 now 
// no start++ in case of else if only end -- because the element swapped at position start can be greater 
// which we can see in next step if we have increaed start if would have ingnored arr[2] which is 4 and is greater also 

// arr[] = {1 2 4 3 3 } end = 3 start = 0 i=2 again loop
// arr[2]<a 4<1 no goto else if 
// 4>b 4>2 yes swap(arr[2],arr[end]) = swap(4,3)  end -- end =2
// arr[] = {1 2 3 4 3 } i=2 start=0 end = 2
// arr[2]<a 3<1 no goto else if 
// arr[2]>b 3 > 2 yes  swap(arr[2],arr[end]) swap(arr[2],arr[2])  swap(3,3 ) which will be same
// so answer is {1 2 3 4 3 } less than 1 left side and greater than 2 right side and order does not matter here




