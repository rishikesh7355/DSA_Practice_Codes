#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int r, int c) {
    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void sum(int arr[][4], int r , int c){
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout << sum << ' ';
    }
}

int main() {
    // Write C++ code here
    int arr[3][4];
    // printing row wise 
    cout << "Enter Elements";
    for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            cin >> arr[i][j];
        }
    }
    //output
    cout << "printing array eleemtns";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter target number " << endl;
    cin>> target;
    
    //fibd target element 
    if(isPresent(arr, target, 3 , 4)){
        cout << "element found" << endl;
    }
    else{
        cout << "element not found" << endl;
    }
    sum(arr,3,4);
}